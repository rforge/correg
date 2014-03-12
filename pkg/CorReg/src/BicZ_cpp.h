#ifndef _CorReg_BicZ_cpp_H
#define _CorReg_BicZ_cpp_H

#include <RcppEigen.h>
using namespace Rcpp ;
Eigen::VectorXd BicZ_cpp(Eigen::MatrixXd X,Eigen::MatrixXd Z,Eigen::VectorXd Bic_vide_vect,Eigen::VectorXd BicOld,double methode,Eigen::MatrixXd Zold) ;

#endif
