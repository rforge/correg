#ifndef _CorReg_BICZsparse2_cpp_H
#define _CorReg_BICZsparse2_cpp_H

#include <RcppEigen.h>
using namespace Rcpp ;
RcppExport Eigen::VectorXd BICZsparse2_cpp(Eigen::MatrixXd X,NumericVector Z_Zi,Eigen::VectorXd Z_Sj,Eigen::VectorXd Bic_vide_vect,int methode,int nrow) ;

#endif
