#include <Rcpp/Lightest>
#include "../inst/include/TreeTools/types.h"
using namespace Rcpp;

#define PARENT(i) edge(i, 0)
#define CHILD(i) edge(i, 1)

// edge must be a two-column edge matrix in preorder
// [[Rcpp::export]]
IntegerVector kept_vertices(const IntegerMatrix edge,
                            const LogicalVector kept) {
  const int
    start_edge = edge.nrow(),
    n_tip = kept.length(),
    root_node = n_tip + 1,
    all_nodes = start_edge + 2
  ;
  
  IntegerVector ret(edge.nrow() + 2);
  // Initialize leaves
  for (intx i = kept.length(); i--; ) {
    if (kept[i]) {
      ret[i + 1] = 2;
    }
  }
  
  int root_edges = 0; 
  auto one_child = std::make_unique<int[]>(all_nodes);
  // Traverse in postorder
  for (intx i = edge.nrow(); i--; ) {
    const int 
      edge_child = CHILD(i),
      edge_parent = PARENT(i),
      downstream = ret[edge_child]
    ;
    if (edge_parent == root_node) {
      ++root_edges;
    }
    if (downstream) {
      ++ret[edge_parent];
      if (downstream == 1) {
        one_child[edge_parent] = one_child[edge_child];
      } else {
        one_child[edge_parent] = edge_child;
      }
    }
  }
  
  // Collapse root if necessary
  int new_root = root_node;
  if (ret[root_node] == 1) {
    // We've deleted one side of the tree entirely, creating a trailing root
    new_root = one_child[root_node];
  }
  const bool rooted = root_edges == 2;
  if (!rooted && ret[new_root] == 2) {
    // In preorder, first node after root is its descendant
    // We could relax the requirement for the tree to be in preorder if we
    // traversed the edges until we found PARENT(i) == new_root,
    // as a small penalty in run time.
    ret[new_root + 1] = -1;
  }
  
  return ret;
}