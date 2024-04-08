// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/TreeTools.h"
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// ClusterTable_new
SEXP ClusterTable_new(Rcpp::List phylo);
RcppExport SEXP _TreeTools_ClusterTable_new(SEXP phyloSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type phylo(phyloSEXP);
    rcpp_result_gen = Rcpp::wrap(ClusterTable_new(phylo));
    return rcpp_result_gen;
END_RCPP
}
// ClusterTable_matrix
Rcpp::IntegerMatrix ClusterTable_matrix(SEXP xp);
RcppExport SEXP _TreeTools_ClusterTable_matrix(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    rcpp_result_gen = Rcpp::wrap(ClusterTable_matrix(xp));
    return rcpp_result_gen;
END_RCPP
}
// ClusterTable_decode
Rcpp::IntegerVector ClusterTable_decode(SEXP xp);
RcppExport SEXP _TreeTools_ClusterTable_decode(SEXP xpSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type xp(xpSEXP);
    rcpp_result_gen = Rcpp::wrap(ClusterTable_decode(xp));
    return rcpp_result_gen;
END_RCPP
}
// ape_neworder_phylo
IntegerVector ape_neworder_phylo(IntegerVector n_tips, IntegerVector parent, IntegerVector child, IntegerVector n_edges, IntegerVector order);
RcppExport SEXP _TreeTools_ape_neworder_phylo(SEXP n_tipsSEXP, SEXP parentSEXP, SEXP childSEXP, SEXP n_edgesSEXP, SEXP orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type n_tips(n_tipsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type parent(parentSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type child(childSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type n_edges(n_edgesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type order(orderSEXP);
    rcpp_result_gen = Rcpp::wrap(ape_neworder_phylo(n_tips, parent, child, n_edges, order));
    return rcpp_result_gen;
END_RCPP
}
// ape_neworder_pruningwise
IntegerVector ape_neworder_pruningwise(IntegerVector n_tips, IntegerVector n_node, IntegerVector parent, IntegerVector child, IntegerVector n_edges);
RcppExport SEXP _TreeTools_ape_neworder_pruningwise(SEXP n_tipsSEXP, SEXP n_nodeSEXP, SEXP parentSEXP, SEXP childSEXP, SEXP n_edgesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type n_tips(n_tipsSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type n_node(n_nodeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type parent(parentSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type child(childSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type n_edges(n_edgesSEXP);
    rcpp_result_gen = Rcpp::wrap(ape_neworder_pruningwise(n_tips, n_node, parent, child, n_edges));
    return rcpp_result_gen;
END_RCPP
}
// as_newick
CharacterVector as_newick(const IntegerMatrix edge);
RcppExport SEXP _TreeTools_as_newick(SEXP edgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type edge(edgeSEXP);
    rcpp_result_gen = Rcpp::wrap(as_newick(edge));
    return rcpp_result_gen;
END_RCPP
}
// birth_death
List birth_death(const NumericVector pi, const NumericMatrix lambda, const NumericVector psi, const NumericVector rA, const NumericMatrix gamma, const NumericVector rho, const NumericVector tMax, const IntegerVector nMax, const IntegerVector rSeed);
RcppExport SEXP _TreeTools_birth_death(SEXP piSEXP, SEXP lambdaSEXP, SEXP psiSEXP, SEXP rASEXP, SEXP gammaSEXP, SEXP rhoSEXP, SEXP tMaxSEXP, SEXP nMaxSEXP, SEXP rSeedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type pi(piSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type psi(psiSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type rA(rASEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type rho(rhoSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type tMax(tMaxSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type nMax(nMaxSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type rSeed(rSeedSEXP);
    rcpp_result_gen = Rcpp::wrap(birth_death(pi, lambda, psi, rA, gamma, rho, tMax, nMax, rSeed));
    return rcpp_result_gen;
END_RCPP
}
// consensus_tree
LogicalMatrix consensus_tree(const List trees, const NumericVector p);
RcppExport SEXP _TreeTools_consensus_tree(SEXP treesSEXP, SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List >::type trees(treesSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(consensus_tree(trees, p));
    return rcpp_result_gen;
END_RCPP
}
// descendant_edges
LogicalMatrix descendant_edges(const IntegerVector parent, const IntegerVector child, const IntegerVector postorder);
RcppExport SEXP _TreeTools_descendant_edges(SEXP parentSEXP, SEXP childSEXP, SEXP postorderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector >::type parent(parentSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type child(childSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type postorder(postorderSEXP);
    rcpp_result_gen = Rcpp::wrap(descendant_edges(parent, child, postorder));
    return rcpp_result_gen;
END_RCPP
}
// descendant_tips
LogicalMatrix descendant_tips(const IntegerVector parent, const IntegerVector child, const IntegerVector postorder);
RcppExport SEXP _TreeTools_descendant_tips(SEXP parentSEXP, SEXP childSEXP, SEXP postorderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector >::type parent(parentSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type child(childSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type postorder(postorderSEXP);
    rcpp_result_gen = Rcpp::wrap(descendant_tips(parent, child, postorder));
    return rcpp_result_gen;
END_RCPP
}
// num_to_parent
IntegerVector num_to_parent(const IntegerVector n, const IntegerVector nTip);
RcppExport SEXP _TreeTools_num_to_parent(SEXP nSEXP, SEXP nTipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector >::type n(nSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type nTip(nTipSEXP);
    rcpp_result_gen = Rcpp::wrap(num_to_parent(n, nTip));
    return rcpp_result_gen;
END_RCPP
}
// random_parent
IntegerVector random_parent(const IntegerVector nTip, const IntegerVector seed);
RcppExport SEXP _TreeTools_random_parent(SEXP nTipSEXP, SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector >::type nTip(nTipSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type seed(seedSEXP);
    rcpp_result_gen = Rcpp::wrap(random_parent(nTip, seed));
    return rcpp_result_gen;
END_RCPP
}
// edge_to_num
IntegerVector edge_to_num(IntegerVector parent, IntegerVector child, IntegerVector nTip);
RcppExport SEXP _TreeTools_edge_to_num(SEXP parentSEXP, SEXP childSEXP, SEXP nTipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type parent(parentSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type child(childSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nTip(nTipSEXP);
    rcpp_result_gen = Rcpp::wrap(edge_to_num(parent, child, nTip));
    return rcpp_result_gen;
END_RCPP
}
// edge_to_mixed_base
IntegerVector edge_to_mixed_base(const IntegerVector parent, const IntegerVector child, const IntegerVector nTip);
RcppExport SEXP _TreeTools_edge_to_mixed_base(SEXP parentSEXP, SEXP childSEXP, SEXP nTipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector >::type parent(parentSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type child(childSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type nTip(nTipSEXP);
    rcpp_result_gen = Rcpp::wrap(edge_to_mixed_base(parent, child, nTip));
    return rcpp_result_gen;
END_RCPP
}
// mixed_base_to_parent
IntegerVector mixed_base_to_parent(const IntegerVector n, const IntegerVector nTip);
RcppExport SEXP _TreeTools_mixed_base_to_parent(SEXP nSEXP, SEXP nTipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector >::type n(nSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type nTip(nTipSEXP);
    rcpp_result_gen = Rcpp::wrap(mixed_base_to_parent(n, nTip));
    return rcpp_result_gen;
END_RCPP
}
// kept_vertices
IntegerVector kept_vertices(const IntegerMatrix edge, const LogicalVector kept);
RcppExport SEXP _TreeTools_kept_vertices(SEXP edgeSEXP, SEXP keptSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type edge(edgeSEXP);
    Rcpp::traits::input_parameter< const LogicalVector >::type kept(keptSEXP);
    rcpp_result_gen = Rcpp::wrap(kept_vertices(edge, kept));
    return rcpp_result_gen;
END_RCPP
}
// minimum_spanning_tree
IntegerMatrix minimum_spanning_tree(const IntegerVector order);
RcppExport SEXP _TreeTools_minimum_spanning_tree(SEXP orderSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerVector >::type order(orderSEXP);
    rcpp_result_gen = Rcpp::wrap(minimum_spanning_tree(order));
    return rcpp_result_gen;
END_RCPP
}
// path_lengths
NumericMatrix path_lengths(const IntegerMatrix edge, const DoubleVector weight);
RcppExport SEXP _TreeTools_path_lengths(SEXP edgeSEXP, SEXP weightSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type edge(edgeSEXP);
    Rcpp::traits::input_parameter< const DoubleVector >::type weight(weightSEXP);
    rcpp_result_gen = Rcpp::wrap(path_lengths(edge, weight));
    return rcpp_result_gen;
END_RCPP
}
// cpp_edge_to_splits
RawMatrix cpp_edge_to_splits(const IntegerMatrix edge, const IntegerVector order, const IntegerVector nTip);
RcppExport SEXP _TreeTools_cpp_edge_to_splits(SEXP edgeSEXP, SEXP orderSEXP, SEXP nTipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type edge(edgeSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type order(orderSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type nTip(nTipSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_edge_to_splits(edge, order, nTip));
    return rcpp_result_gen;
END_RCPP
}
// duplicated_splits
LogicalVector duplicated_splits(const RawMatrix splits, const LogicalVector fromLast);
RcppExport SEXP _TreeTools_duplicated_splits(SEXP splitsSEXP, SEXP fromLastSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const RawMatrix >::type splits(splitsSEXP);
    Rcpp::traits::input_parameter< const LogicalVector >::type fromLast(fromLastSEXP);
    rcpp_result_gen = Rcpp::wrap(duplicated_splits(splits, fromLast));
    return rcpp_result_gen;
END_RCPP
}
// mask_splits
RawMatrix mask_splits(RawMatrix x);
RcppExport SEXP _TreeTools_mask_splits(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(mask_splits(x));
    return rcpp_result_gen;
END_RCPP
}
// not_splits
RawMatrix not_splits(const RawMatrix x);
RcppExport SEXP _TreeTools_not_splits(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const RawMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(not_splits(x));
    return rcpp_result_gen;
END_RCPP
}
// xor_splits
RawMatrix xor_splits(const RawMatrix x, const RawMatrix y);
RcppExport SEXP _TreeTools_xor_splits(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const RawMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< const RawMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(xor_splits(x, y));
    return rcpp_result_gen;
END_RCPP
}
// and_splits
RawMatrix and_splits(const RawMatrix x, const RawMatrix y);
RcppExport SEXP _TreeTools_and_splits(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const RawMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< const RawMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(and_splits(x, y));
    return rcpp_result_gen;
END_RCPP
}
// or_splits
RawMatrix or_splits(const RawMatrix x, const RawMatrix y);
RcppExport SEXP _TreeTools_or_splits(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const RawMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< const RawMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(or_splits(x, y));
    return rcpp_result_gen;
END_RCPP
}
// thin_splits
RawMatrix thin_splits(const RawMatrix splits, const LogicalVector drop);
RcppExport SEXP _TreeTools_thin_splits(SEXP splitsSEXP, SEXP dropSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const RawMatrix >::type splits(splitsSEXP);
    Rcpp::traits::input_parameter< const LogicalVector >::type drop(dropSEXP);
    rcpp_result_gen = Rcpp::wrap(thin_splits(splits, drop));
    return rcpp_result_gen;
END_RCPP
}
// splits_to_edge
IntegerMatrix splits_to_edge(const RawMatrix splits, const IntegerVector nTip);
RcppExport SEXP _TreeTools_splits_to_edge(SEXP splitsSEXP, SEXP nTipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const RawMatrix >::type splits(splitsSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type nTip(nTipSEXP);
    rcpp_result_gen = Rcpp::wrap(splits_to_edge(splits, nTip));
    return rcpp_result_gen;
END_RCPP
}
// tips_in_splits
IntegerVector tips_in_splits(RawMatrix splits);
RcppExport SEXP _TreeTools_tips_in_splits(SEXP splitsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RawMatrix >::type splits(splitsSEXP);
    rcpp_result_gen = Rcpp::wrap(tips_in_splits(splits));
    return rcpp_result_gen;
END_RCPP
}
// edge_to_rooted_shape
IntegerVector edge_to_rooted_shape(IntegerVector parent, IntegerVector child, IntegerVector nTip);
RcppExport SEXP _TreeTools_edge_to_rooted_shape(SEXP parentSEXP, SEXP childSEXP, SEXP nTipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type parent(parentSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type child(childSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nTip(nTipSEXP);
    rcpp_result_gen = Rcpp::wrap(edge_to_rooted_shape(parent, child, nTip));
    return rcpp_result_gen;
END_RCPP
}
// rooted_shape_to_edge
IntegerMatrix rooted_shape_to_edge(NumericVector shape, IntegerVector nTip);
RcppExport SEXP _TreeTools_rooted_shape_to_edge(SEXP shapeSEXP, SEXP nTipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type shape(shapeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nTip(nTipSEXP);
    rcpp_result_gen = Rcpp::wrap(rooted_shape_to_edge(shape, nTip));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP _TreeTools_keep_tip(void *, void *);
RcppExport SEXP _TreeTools_postorder_order(void *);
RcppExport SEXP _TreeTools_preorder_edges_and_nodes(void *, void *);
RcppExport SEXP _TreeTools_preorder_weighted(void *, void *, void *);
RcppExport SEXP _TreeTools_root_binary(void *, void *);
RcppExport SEXP _TreeTools_root_on_node(void *, void *);

static const R_CallMethodDef CallEntries[] = {
    {"_TreeTools_ClusterTable_new", (DL_FUNC) &_TreeTools_ClusterTable_new, 1},
    {"_TreeTools_ClusterTable_matrix", (DL_FUNC) &_TreeTools_ClusterTable_matrix, 1},
    {"_TreeTools_ClusterTable_decode", (DL_FUNC) &_TreeTools_ClusterTable_decode, 1},
    {"_TreeTools_ape_neworder_phylo", (DL_FUNC) &_TreeTools_ape_neworder_phylo, 5},
    {"_TreeTools_ape_neworder_pruningwise", (DL_FUNC) &_TreeTools_ape_neworder_pruningwise, 5},
    {"_TreeTools_as_newick", (DL_FUNC) &_TreeTools_as_newick, 1},
    {"_TreeTools_birth_death", (DL_FUNC) &_TreeTools_birth_death, 9},
    {"_TreeTools_consensus_tree", (DL_FUNC) &_TreeTools_consensus_tree, 2},
    {"_TreeTools_descendant_edges", (DL_FUNC) &_TreeTools_descendant_edges, 3},
    {"_TreeTools_descendant_tips", (DL_FUNC) &_TreeTools_descendant_tips, 3},
    {"_TreeTools_num_to_parent", (DL_FUNC) &_TreeTools_num_to_parent, 2},
    {"_TreeTools_random_parent", (DL_FUNC) &_TreeTools_random_parent, 2},
    {"_TreeTools_edge_to_num", (DL_FUNC) &_TreeTools_edge_to_num, 3},
    {"_TreeTools_edge_to_mixed_base", (DL_FUNC) &_TreeTools_edge_to_mixed_base, 3},
    {"_TreeTools_mixed_base_to_parent", (DL_FUNC) &_TreeTools_mixed_base_to_parent, 2},
    {"_TreeTools_kept_vertices", (DL_FUNC) &_TreeTools_kept_vertices, 2},
    {"_TreeTools_minimum_spanning_tree", (DL_FUNC) &_TreeTools_minimum_spanning_tree, 1},
    {"_TreeTools_path_lengths", (DL_FUNC) &_TreeTools_path_lengths, 2},
    {"_TreeTools_cpp_edge_to_splits", (DL_FUNC) &_TreeTools_cpp_edge_to_splits, 3},
    {"_TreeTools_duplicated_splits", (DL_FUNC) &_TreeTools_duplicated_splits, 2},
    {"_TreeTools_mask_splits", (DL_FUNC) &_TreeTools_mask_splits, 1},
    {"_TreeTools_not_splits", (DL_FUNC) &_TreeTools_not_splits, 1},
    {"_TreeTools_xor_splits", (DL_FUNC) &_TreeTools_xor_splits, 2},
    {"_TreeTools_and_splits", (DL_FUNC) &_TreeTools_and_splits, 2},
    {"_TreeTools_or_splits", (DL_FUNC) &_TreeTools_or_splits, 2},
    {"_TreeTools_thin_splits", (DL_FUNC) &_TreeTools_thin_splits, 2},
    {"_TreeTools_splits_to_edge", (DL_FUNC) &_TreeTools_splits_to_edge, 2},
    {"_TreeTools_tips_in_splits", (DL_FUNC) &_TreeTools_tips_in_splits, 1},
    {"_TreeTools_edge_to_rooted_shape", (DL_FUNC) &_TreeTools_edge_to_rooted_shape, 3},
    {"_TreeTools_rooted_shape_to_edge", (DL_FUNC) &_TreeTools_rooted_shape_to_edge, 2},
    {"_TreeTools_keep_tip",                 (DL_FUNC) &_TreeTools_keep_tip,                 2},
    {"_TreeTools_postorder_order",          (DL_FUNC) &_TreeTools_postorder_order,          1},
    {"_TreeTools_preorder_edges_and_nodes", (DL_FUNC) &_TreeTools_preorder_edges_and_nodes, 2},
    {"_TreeTools_preorder_weighted",        (DL_FUNC) &_TreeTools_preorder_weighted,        3},
    {"_TreeTools_root_binary",              (DL_FUNC) &_TreeTools_root_binary,              2},
    {"_TreeTools_root_on_node",             (DL_FUNC) &_TreeTools_root_on_node,             2},
    {NULL, NULL, 0}
};

RcppExport void R_init_TreeTools(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
