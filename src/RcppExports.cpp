//// File Name: RcppExports.cpp
//// File Version: 0.003045
// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>

using namespace Rcpp; using namespace arma;

// lam_rcpp_loglike_mvnorm
double lam_rcpp_loglike_mvnorm(arma::colvec M, arma::mat S, arma::colvec mu, arma::mat Sigma, double n, bool use_log, double lambda, bool ginv, double eps);
RcppExport SEXP _LAM_lam_rcpp_loglike_mvnorm(SEXP MSEXP, SEXP SSEXP, SEXP muSEXP, SEXP SigmaSEXP, SEXP nSEXP, SEXP use_logSEXP, SEXP lambdaSEXP, SEXP ginvSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::colvec >::type M(MSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type S(SSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< double >::type n(nSEXP);
    Rcpp::traits::input_parameter< bool >::type use_log(use_logSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< bool >::type ginv(ginvSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(lam_rcpp_loglike_mvnorm(M, S, mu, Sigma, n, use_log, lambda, ginv, eps));
    return rcpp_result_gen;
END_RCPP
}
// lam_rcpp_loglike_mvnorm_na_pattern_rcpp
double lam_rcpp_loglike_mvnorm_na_pattern_rcpp(Rcpp::List suff_stat, arma::colvec mu, arma::mat Sigma, bool use_log, double lambda, bool ginv, double eps);
RcppExport SEXP _LAM_lam_rcpp_loglike_mvnorm_na_pattern_rcpp(SEXP suff_statSEXP, SEXP muSEXP, SEXP SigmaSEXP, SEXP use_logSEXP, SEXP lambdaSEXP, SEXP ginvSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type suff_stat(suff_statSEXP);
    Rcpp::traits::input_parameter< arma::colvec >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma(SigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type use_log(use_logSEXP);
    Rcpp::traits::input_parameter< double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< bool >::type ginv(ginvSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(lam_rcpp_loglike_mvnorm_na_pattern_rcpp(suff_stat, mu, Sigma, use_log, lambda, ginv, eps));
    return rcpp_result_gen;
END_RCPP
}
// lam_rcpp_mlnormal_proc_variance_shortcut_Z_restructure
Rcpp::List lam_rcpp_mlnormal_proc_variance_shortcut_Z_restructure(Rcpp::List Z_list, Rcpp::IntegerVector update_dim, Rcpp::NumericVector start_orig, Rcpp::NumericVector end_orig, Rcpp::NumericVector dim_Z_index, Rcpp::NumericVector Z_index, Rcpp::NumericVector orig_id, Rcpp::NumericVector dim_id);
RcppExport SEXP _LAM_lam_rcpp_mlnormal_proc_variance_shortcut_Z_restructure(SEXP Z_listSEXP, SEXP update_dimSEXP, SEXP start_origSEXP, SEXP end_origSEXP, SEXP dim_Z_indexSEXP, SEXP Z_indexSEXP, SEXP orig_idSEXP, SEXP dim_idSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type Z_list(Z_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type update_dim(update_dimSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type start_orig(start_origSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type end_orig(end_origSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dim_Z_index(dim_Z_indexSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Z_index(Z_indexSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type orig_id(orig_idSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dim_id(dim_idSEXP);
    rcpp_result_gen = Rcpp::wrap(lam_rcpp_mlnormal_proc_variance_shortcut_Z_restructure(Z_list, update_dim, start_orig, end_orig, dim_Z_index, Z_index, orig_id, dim_id));
    return rcpp_result_gen;
END_RCPP
}
// lam_rcpp_mlnormal_proc_variance_shortcut_XY_restructure
Rcpp::List lam_rcpp_mlnormal_proc_variance_shortcut_XY_restructure(Rcpp::NumericMatrix freq_id, Rcpp::NumericVector y, Rcpp::NumericMatrix X, int G);
RcppExport SEXP _LAM_lam_rcpp_mlnormal_proc_variance_shortcut_XY_restructure(SEXP freq_idSEXP, SEXP ySEXP, SEXP XSEXP, SEXP GSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type freq_id(freq_idSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type G(GSEXP);
    rcpp_result_gen = Rcpp::wrap(lam_rcpp_mlnormal_proc_variance_shortcut_XY_restructure(freq_id, y, X, G));
    return rcpp_result_gen;
END_RCPP
}
// lam_rcpp_mlnormal_update_V
Rcpp::List lam_rcpp_mlnormal_update_V(Rcpp::List Z_list, Rcpp::NumericVector Z_index, Rcpp::NumericVector dim_id, Rcpp::NumericVector dim_Z_index, Rcpp::NumericVector startIndex, Rcpp::NumericVector endIndex, int N, int max_dim, Rcpp::NumericVector do_compute, Rcpp::NumericVector theta, int use_ginverse);
RcppExport SEXP _LAM_lam_rcpp_mlnormal_update_V(SEXP Z_listSEXP, SEXP Z_indexSEXP, SEXP dim_idSEXP, SEXP dim_Z_indexSEXP, SEXP startIndexSEXP, SEXP endIndexSEXP, SEXP NSEXP, SEXP max_dimSEXP, SEXP do_computeSEXP, SEXP thetaSEXP, SEXP use_ginverseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type Z_list(Z_listSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type Z_index(Z_indexSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dim_id(dim_idSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dim_Z_index(dim_Z_indexSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type startIndex(startIndexSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type endIndex(endIndexSEXP);
    Rcpp::traits::input_parameter< int >::type N(NSEXP);
    Rcpp::traits::input_parameter< int >::type max_dim(max_dimSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type do_compute(do_computeSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type use_ginverse(use_ginverseSEXP);
    rcpp_result_gen = Rcpp::wrap(lam_rcpp_mlnormal_update_V(Z_list, Z_index, dim_id, dim_Z_index, startIndex, endIndex, N, max_dim, do_compute, theta, use_ginverse));
    return rcpp_result_gen;
END_RCPP
}
// lam_rcpp_mlnormal_update_beta
Rcpp::List lam_rcpp_mlnormal_update_beta(Rcpp::NumericVector dim_id, Rcpp::NumericVector startIndex, Rcpp::NumericVector endIndex, int G, Rcpp::NumericMatrix X, Rcpp::NumericVector y, Rcpp::NumericMatrix V1);
RcppExport SEXP _LAM_lam_rcpp_mlnormal_update_beta(SEXP dim_idSEXP, SEXP startIndexSEXP, SEXP endIndexSEXP, SEXP GSEXP, SEXP XSEXP, SEXP ySEXP, SEXP V1SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type dim_id(dim_idSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type startIndex(startIndexSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type endIndex(endIndexSEXP);
    Rcpp::traits::input_parameter< int >::type G(GSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type X(XSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type V1(V1SEXP);
    rcpp_result_gen = Rcpp::wrap(lam_rcpp_mlnormal_update_beta(dim_id, startIndex, endIndex, G, X, y, V1));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_LAM_lam_rcpp_loglike_mvnorm", (DL_FUNC) &_LAM_lam_rcpp_loglike_mvnorm, 9},
    {"_LAM_lam_rcpp_loglike_mvnorm_na_pattern_rcpp", (DL_FUNC) &_LAM_lam_rcpp_loglike_mvnorm_na_pattern_rcpp, 7},
    {"_LAM_lam_rcpp_mlnormal_proc_variance_shortcut_Z_restructure", (DL_FUNC) &_LAM_lam_rcpp_mlnormal_proc_variance_shortcut_Z_restructure, 8},
    {"_LAM_lam_rcpp_mlnormal_proc_variance_shortcut_XY_restructure", (DL_FUNC) &_LAM_lam_rcpp_mlnormal_proc_variance_shortcut_XY_restructure, 4},
    {"_LAM_lam_rcpp_mlnormal_update_V", (DL_FUNC) &_LAM_lam_rcpp_mlnormal_update_V, 11},
    {"_LAM_lam_rcpp_mlnormal_update_beta", (DL_FUNC) &_LAM_lam_rcpp_mlnormal_update_beta, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_LAM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
