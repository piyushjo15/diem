// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// LlkDirMultSparse
NumericVector LlkDirMultSparse(Eigen::SparseMatrix<double> x, NumericVector sizes, NumericMatrix alpha, bool debug);
RcppExport SEXP _diem_LlkDirMultSparse(SEXP xSEXP, SEXP sizesSEXP, SEXP alphaSEXP, SEXP debugSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sizes(sizesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< bool >::type debug(debugSEXP);
    rcpp_result_gen = Rcpp::wrap(LlkDirMultSparse(x, sizes, alpha, debug));
    return rcpp_result_gen;
END_RCPP
}
// LlkDirMultSparsePar
NumericVector LlkDirMultSparsePar(Eigen::SparseMatrix<double> x, NumericVector sizes, NumericMatrix alpha, int threads, bool display_progress, bool debug);
RcppExport SEXP _diem_LlkDirMultSparsePar(SEXP xSEXP, SEXP sizesSEXP, SEXP alphaSEXP, SEXP threadsSEXP, SEXP display_progressSEXP, SEXP debugSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sizes(sizesSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    Rcpp::traits::input_parameter< bool >::type debug(debugSEXP);
    rcpp_result_gen = Rcpp::wrap(LlkDirMultSparsePar(x, sizes, alpha, threads, display_progress, debug));
    return rcpp_result_gen;
END_RCPP
}
// compute_LOO_step_all
NumericVector compute_LOO_step_all(Eigen::SparseMatrix<double> x, NumericVector sizes, NumericVector weights, NumericVector alpha, double eps, int max_loo, double psc, int threads, bool debug);
RcppExport SEXP _diem_compute_LOO_step_all(SEXP xSEXP, SEXP sizesSEXP, SEXP weightsSEXP, SEXP alphaSEXP, SEXP epsSEXP, SEXP max_looSEXP, SEXP pscSEXP, SEXP threadsSEXP, SEXP debugSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sizes(sizesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type max_loo(max_looSEXP);
    Rcpp::traits::input_parameter< double >::type psc(pscSEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    Rcpp::traits::input_parameter< bool >::type debug(debugSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_LOO_step_all(x, sizes, weights, alpha, eps, max_loo, psc, threads, debug));
    return rcpp_result_gen;
END_RCPP
}
// compute_LOO_step
NumericVector compute_LOO_step(Eigen::SparseMatrix<double> x, NumericVector sizes, NumericVector weights, NumericVector alpha, double psc, bool debug);
RcppExport SEXP _diem_compute_LOO_step(SEXP xSEXP, SEXP sizesSEXP, SEXP weightsSEXP, SEXP alphaSEXP, SEXP pscSEXP, SEXP debugSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sizes(sizesSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type weights(weightsSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type psc(pscSEXP);
    Rcpp::traits::input_parameter< bool >::type debug(debugSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_LOO_step(x, sizes, weights, alpha, psc, debug));
    return rcpp_result_gen;
END_RCPP
}
// fast_varCPP
NumericVector fast_varCPP(Eigen::SparseMatrix<double> x, NumericVector mu);
RcppExport SEXP _diem_fast_varCPP(SEXP xSEXP, SEXP muSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mu(muSEXP);
    rcpp_result_gen = Rcpp::wrap(fast_varCPP(x, mu));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_diem_LlkDirMultSparse", (DL_FUNC) &_diem_LlkDirMultSparse, 4},
    {"_diem_LlkDirMultSparsePar", (DL_FUNC) &_diem_LlkDirMultSparsePar, 6},
    {"_diem_compute_LOO_step_all", (DL_FUNC) &_diem_compute_LOO_step_all, 9},
    {"_diem_compute_LOO_step", (DL_FUNC) &_diem_compute_LOO_step, 6},
    {"_diem_fast_varCPP", (DL_FUNC) &_diem_fast_varCPP, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_diem(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
