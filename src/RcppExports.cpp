// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/TreeTools.h"
#include <Rcpp.h>

using namespace Rcpp;

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
// drop_tip2
IntegerMatrix drop_tip2(const IntegerMatrix preorder, const IntegerVector drop);
RcppExport SEXP _TreeTools_drop_tip2(SEXP preorderSEXP, SEXP dropSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type preorder(preorderSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type drop(dropSEXP);
    rcpp_result_gen = Rcpp::wrap(drop_tip2(preorder, drop));
    return rcpp_result_gen;
END_RCPP
}
// drop_tip
IntegerMatrix drop_tip(const IntegerMatrix edge, const IntegerVector drop);
RcppExport SEXP _TreeTools_drop_tip(SEXP edgeSEXP, SEXP dropSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const IntegerMatrix >::type edge(edgeSEXP);
    Rcpp::traits::input_parameter< const IntegerVector >::type drop(dropSEXP);
    rcpp_result_gen = Rcpp::wrap(drop_tip(edge, drop));
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
// cpp_edge_to_splits
RawMatrix cpp_edge_to_splits(IntegerMatrix edge, IntegerVector nTip);
RcppExport SEXP _TreeTools_cpp_edge_to_splits(SEXP edgeSEXP, SEXP nTipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type edge(edgeSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nTip(nTipSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_edge_to_splits(edge, nTip));
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
