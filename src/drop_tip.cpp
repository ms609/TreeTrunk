#include <Rcpp.h>
using namespace Rcpp;

#include "../inst/include/TreeTools/types.h"
#include "../inst/include/TreeTools/renumber_tree.h"

// [[Rcpp::export]]
IntegerMatrix drop_tip (const IntegerMatrix edge, const IntegerVector drop) {
  IntegerMatrix preorder = TreeTools::preorder_edges_and_nodes(edge(_, 0), edge(_, 1));

  const int32 root_node = preorder(0, 0),
    start_tip = root_node - 1,
    start_edge = preorder.nrow(),
    start_node = start_edge - start_tip,
    max_node = start_node + start_tip
  ;

  int32
    still_to_drop = drop.length(),
    n_deleted = 0
  ;

  IntegerVector droppers = drop;
  IntegerMatrix ret(start_edge - still_to_drop, 2);

  std::unique_ptr<int32[]> delete_edge = std::make_unique<int32[]>(start_edge);

  Rcout << "Starting on tree with " << start_tip << " tips, root = "
        << root_node <<", " << start_edge << " edges.\n";

  for (int32 i = start_edge; i--; ) {
    const int32 child = preorder(i, 1);
    bool delete_this = 0;
    if (child <= start_tip) {
      for (int32 j = still_to_drop; j--; ) {
        Rcout << j << ": " << child << " == " << drop[j] << "?\n";
        if (child == drop[j]) {
          Rcout << " Delete " << int(preorder(i, 0)) << "-"<< child << ".\n";
          droppers[j] = droppers[still_to_drop--];
          delete_this = 1;
          break;
        }
      }
    }
    if (delete_this) {
      delete_edge[n_deleted++] = i;
      delete_this = 0;
    } else {
      Rcout << "Retain: "<<int(preorder(i, 0))<<"-"<<int(preorder(i, 1))<<"\n";
      ret(i - still_to_drop, _) = preorder(i, _);
    }
  }

  return ret;

/*

parent <- edge[, 1]
child <- edge[, 2]
external <- child <= nTip

# Drop tips:
  keep <- !child %in% which(drop)

# Drop dangling nodes:
    repeat {
  nonDanglers <- (child[keep] %in% parent[keep]) | external[keep]
  if (all(nonDanglers)) break
    keep[keep] <- nonDanglers
}

    parent <- parent[keep]
    child <- child[keep]

# Collapse singles:
    singletons <- tabulate(parent) == 1
    if (any(singletons)) {
      edgeBelowSingles <- rev(which(parent %in% which(singletons)))
      sortedSingles <- parent[edgeBelowSingles]
      edgeAboveSingles <- match(sortedSingles, child)

      for (i in seq_along(sortedSingles)) {
        child[edgeAboveSingles[i]] <- child[edgeBelowSingles[i]]
      }
      edge <- c(parent[-edgeBelowSingles], child[-edgeBelowSingles])
    } else {
      edge <- c(parent, child)
    }

    newNumbers <- integer(max(edge))
      uniqueInts <- unique(edge)
      newNumbers[uniqueInts] <- rank(uniqueInts)
      edge <- matrix(newNumbers[edge], ncol = 2L)
*/
}
