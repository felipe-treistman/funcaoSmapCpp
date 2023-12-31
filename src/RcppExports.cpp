// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rodada_varios_dias_cpp2
NumericMatrix rodada_varios_dias_cpp2(NumericVector modelo, NumericVector inicializacao, double area, NumericVector precipitacao, NumericVector evapotranspiracao, NumericVector Emarg, int numero_dias);
RcppExport SEXP _funcaoSmapCpp_rodada_varios_dias_cpp2(SEXP modeloSEXP, SEXP inicializacaoSEXP, SEXP areaSEXP, SEXP precipitacaoSEXP, SEXP evapotranspiracaoSEXP, SEXP EmargSEXP, SEXP numero_diasSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type modelo(modeloSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type inicializacao(inicializacaoSEXP);
    Rcpp::traits::input_parameter< double >::type area(areaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type precipitacao(precipitacaoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type evapotranspiracao(evapotranspiracaoSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Emarg(EmargSEXP);
    Rcpp::traits::input_parameter< int >::type numero_dias(numero_diasSEXP);
    rcpp_result_gen = Rcpp::wrap(rodada_varios_dias_cpp2(modelo, inicializacao, area, precipitacao, evapotranspiracao, Emarg, numero_dias));
    return rcpp_result_gen;
END_RCPP
}
// rodada_cenarios_dias_cpp2
List rodada_cenarios_dias_cpp2(NumericVector modelo, NumericMatrix inicializacao, double area, NumericMatrix precipitacao, NumericMatrix evapotranspiracao, NumericMatrix Emarg, int numero_dias, int numero_cenarios);
RcppExport SEXP _funcaoSmapCpp_rodada_cenarios_dias_cpp2(SEXP modeloSEXP, SEXP inicializacaoSEXP, SEXP areaSEXP, SEXP precipitacaoSEXP, SEXP evapotranspiracaoSEXP, SEXP EmargSEXP, SEXP numero_diasSEXP, SEXP numero_cenariosSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type modelo(modeloSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type inicializacao(inicializacaoSEXP);
    Rcpp::traits::input_parameter< double >::type area(areaSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type precipitacao(precipitacaoSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type evapotranspiracao(evapotranspiracaoSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Emarg(EmargSEXP);
    Rcpp::traits::input_parameter< int >::type numero_dias(numero_diasSEXP);
    Rcpp::traits::input_parameter< int >::type numero_cenarios(numero_cenariosSEXP);
    rcpp_result_gen = Rcpp::wrap(rodada_cenarios_dias_cpp2(modelo, inicializacao, area, precipitacao, evapotranspiracao, Emarg, numero_dias, numero_cenarios));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_funcaoSmapCpp_rodada_varios_dias_cpp2", (DL_FUNC) &_funcaoSmapCpp_rodada_varios_dias_cpp2, 7},
    {"_funcaoSmapCpp_rodada_cenarios_dias_cpp2", (DL_FUNC) &_funcaoSmapCpp_rodada_cenarios_dias_cpp2, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_funcaoSmapCpp(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
