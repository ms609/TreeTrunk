#ifndef TreeTools_H_GEN_
#define TreeTools_H_GEN_

#include <Rcpp.h>
using namespace Rcpp;

namespace TreeTools {

  using namespace Rcpp;

  extern IntegerMatrix preorder_edges_and_nodes(const IntegerVector parent,
                                                const IntegerVector child);
}

#endif // TreeTools_H_GEN_
