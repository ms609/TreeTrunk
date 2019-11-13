#include <Rcpp.h>
using namespace Rcpp;
/*#include <stdint.h> // for uint32_t 

const uint32_t powers_of_two[32] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512,
                                    1024, 2048, 4096, 8192, 16384, 32768,
                                    65536, 131072, 262144, 524288, 1048576,
                                    2097152, 4194304, 8388608, 16777216,
                                    33554432, 67108864, 134217728, 268435456,
                                    536870912U, 1073741824U, 2147483648U};
*/
 
const int powers_of_two[16] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 
                               2048, 4096, 8192, 16384, 32768};
const int BIN_SIZE = 8;


// Edges must be listed in postorder
// [[Rcpp::export]]
RawMatrix cpp_edge_to_splits(NumericMatrix edge, IntegerVector nTip) {
  if (edge.cols() != 2) {
    throw std::invalid_argument("Edge matrix must contain two columns");
  }
  
  const int n_edge = edge.rows(),
    n_node = n_edge + 1,
    n_tip = nTip[0],
    n_return = n_edge - n_tip - 1,
    n_bin = ((n_tip - 1) / BIN_SIZE) + 1;

  if (n_edge == n_tip) { /* No internal nodes resolved */
    return RawMatrix (0, n_bin);
  }

  int** splits = new int*[n_node];
  for (int i = 0; i != n_node; i++) {
    splits[i] = new int[n_bin];
    for (int j = 0; j != n_bin; j++) {
      splits[i][j] = 0;
    }
  }

  for (int i = 0; i != n_tip; i++) {
    splits[i][(int) i / BIN_SIZE] = powers_of_two[i % BIN_SIZE];
  }

  for (int i = 0; i != n_edge - 1; i++) { /* final edge is second root edge */
    for (int j = 0; j != n_bin; j++) {
      splits[(int) edge(i, 0) - 1][j] |= splits[(int) edge(i, 1) - 1][j];
    }
  }

  RawMatrix ret(n_return, n_bin);
  int n_trivial = 0;
  const int trivial_one = edge(n_edge - 1, 0) - 1,
    trivial_two = ((edge(n_edge - 1, 1) <= n_tip) ? edge(n_edge - 1, 1) : 
    edge(n_edge - 2, 1)) - 1;
  Rcout << "trivial nodes: " << trivial_one << ", " << trivial_two << ".\n";
  for (int i = n_tip; i != n_tip + n_edge - 1; i++) {
    for (int j = 0; j != n_bin; j++) {
      if (n_tip + i == trivial_one || n_tip + i == trivial_two) {
        n_trivial++;
      } else {
        ret(i - n_tip - n_trivial, j) = splits[n_tip + i][j];
      }
    }
  }

  return(ret);
}
