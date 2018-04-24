// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/geojsonsf.h"
#include <Rcpp.h>

using namespace Rcpp;

// rcpp_geojson_to_sfc
Rcpp::List rcpp_geojson_to_sfc(Rcpp::StringVector geojson, bool& unnest);
RcppExport SEXP _geojsonsf_rcpp_geojson_to_sfc(SEXP geojsonSEXP, SEXP unnestSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geojson(geojsonSEXP);
    Rcpp::traits::input_parameter< bool& >::type unnest(unnestSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_geojson_to_sfc(geojson, unnest));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_geojson_to_sf
Rcpp::List rcpp_geojson_to_sf(Rcpp::StringVector geojson, bool unnest);
RcppExport SEXP _geojsonsf_rcpp_geojson_to_sf(SEXP geojsonSEXP, SEXP unnestSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geojson(geojsonSEXP);
    Rcpp::traits::input_parameter< bool >::type unnest(unnestSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_geojson_to_sf(geojson, unnest));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_geojson_to_wkt
Rcpp::List rcpp_geojson_to_wkt(Rcpp::StringVector geojson);
RcppExport SEXP _geojsonsf_rcpp_geojson_to_wkt(SEXP geojsonSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::StringVector >::type geojson(geojsonSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_geojson_to_wkt(geojson));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_read_sfc_file
Rcpp::List rcpp_read_sfc_file(std::string file, bool unnest);
RcppExport SEXP _geojsonsf_rcpp_read_sfc_file(SEXP fileSEXP, SEXP unnestSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< bool >::type unnest(unnestSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_read_sfc_file(file, unnest));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_read_sf_file
Rcpp::List rcpp_read_sf_file(std::string file, bool unnest);
RcppExport SEXP _geojsonsf_rcpp_read_sf_file(SEXP fileSEXP, SEXP unnestSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type file(fileSEXP);
    Rcpp::traits::input_parameter< bool >::type unnest(unnestSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_read_sf_file(file, unnest));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sfc_to_geojson
Rcpp::StringVector rcpp_sfc_to_geojson(Rcpp::List sfc);
RcppExport SEXP _geojsonsf_rcpp_sfc_to_geojson(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sfc_to_geojson(sfc));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_sf_to_geojson
Rcpp::StringVector rcpp_sf_to_geojson(Rcpp::List sf, bool atomise);
RcppExport SEXP _geojsonsf_rcpp_sf_to_geojson(SEXP sfSEXP, SEXP atomiseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< bool >::type atomise(atomiseSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_sf_to_geojson(sf, atomise));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_geojsonsf_rcpp_geojson_to_sfc", (DL_FUNC) &_geojsonsf_rcpp_geojson_to_sfc, 2},
    {"_geojsonsf_rcpp_geojson_to_sf", (DL_FUNC) &_geojsonsf_rcpp_geojson_to_sf, 2},
    {"_geojsonsf_rcpp_geojson_to_wkt", (DL_FUNC) &_geojsonsf_rcpp_geojson_to_wkt, 1},
    {"_geojsonsf_rcpp_read_sfc_file", (DL_FUNC) &_geojsonsf_rcpp_read_sfc_file, 2},
    {"_geojsonsf_rcpp_read_sf_file", (DL_FUNC) &_geojsonsf_rcpp_read_sf_file, 2},
    {"_geojsonsf_rcpp_sfc_to_geojson", (DL_FUNC) &_geojsonsf_rcpp_sfc_to_geojson, 1},
    {"_geojsonsf_rcpp_sf_to_geojson", (DL_FUNC) &_geojsonsf_rcpp_sf_to_geojson, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_geojsonsf(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
