// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/TreeTools.h"
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// as_newick
CharacterVector as_newick(IntegerMatrix edge);
RcppExport SEXP _TreeTools_as_newick(SEXP edgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type edge(edgeSEXP);
    rcpp_result_gen = Rcpp::wrap(as_newick(edge));
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
// num_to_parent
IntegerVector num_to_parent(const NumericVector n, const IntegerVector nTip);
RcppExport SEXP _TreeTools_num_to_parent(SEXP nSEXP, SEXP nTipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type n(nSEXP);
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
IntegerVector edge_to_mixed_base(IntegerVector parent, IntegerVector child, IntegerVector nTip);
RcppExport SEXP _TreeTools_edge_to_mixed_base(SEXP parentSEXP, SEXP childSEXP, SEXP nTipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type parent(parentSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type child(childSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nTip(nTipSEXP);
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
// keep_tip
IntegerMatrix keep_tip(const IntegerMatrix edge, const LogicalVector keep);
RcppExport SEXP _TreeTools_keep_tip(SEXP edgeSEXP, SEXP keepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type edge(edgeSEXP);
    Rcpp::traits::input_parameter< const LogicalVector >::type keep(keepSEXP);
    rcpp_result_gen = Rcpp::wrap(keep_tip(edge, keep));
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
