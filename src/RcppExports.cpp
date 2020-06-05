// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

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
// num_to_parent
IntegerVector num_to_parent(NumericVector n, IntegerVector nTip);
RcppExport SEXP _TreeTools_num_to_parent(SEXP nSEXP, SEXP nTipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type n(nSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type nTip(nTipSEXP);
    rcpp_result_gen = Rcpp::wrap(num_to_parent(n, nTip));
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
// phangorn_bipCPP
List phangorn_bipCPP(IntegerMatrix orig, int nTips);
RcppExport SEXP _TreeTools_phangorn_bipCPP(SEXP origSEXP, SEXP nTipsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type orig(origSEXP);
    Rcpp::traits::input_parameter< int >::type nTips(nTipsSEXP);
    rcpp_result_gen = Rcpp::wrap(phangorn_bipCPP(orig, nTips));
    return rcpp_result_gen;
END_RCPP
}
// preorder_edges_and_nodes
IntegerMatrix preorder_edges_and_nodes(IntegerVector parent, IntegerVector child);
RcppExport SEXP _TreeTools_preorder_edges_and_nodes(SEXP parentSEXP, SEXP childSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type parent(parentSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type child(childSEXP);
    rcpp_result_gen = Rcpp::wrap(preorder_edges_and_nodes(parent, child));
    return rcpp_result_gen;
END_RCPP
}
// postorder_edges
IntegerMatrix postorder_edges(IntegerMatrix edge);
RcppExport SEXP _TreeTools_postorder_edges(SEXP edgeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerMatrix >::type edge(edgeSEXP);
    rcpp_result_gen = Rcpp::wrap(postorder_edges(edge));
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
// n_rooted_shapes
IntegerVector n_rooted_shapes(IntegerVector nTip);
RcppExport SEXP _TreeTools_n_rooted_shapes(SEXP nTipSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type nTip(nTipSEXP);
    rcpp_result_gen = Rcpp::wrap(n_rooted_shapes(nTip));
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
