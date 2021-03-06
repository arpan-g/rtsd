/**
 * Header file for the XXLinearSystemModel model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * 20-sim C++ glue code to connect to LinearSystemModel
 * Modifying this file is absolutely not recommended!
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#pragma once

#include "csp/CSP.h"
#include "xxsim/LinearSystemModel.hpp" 
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

using namespace LUNA::CSP;

namespace LinearSystem { namespace XXLinearSystemModel { 

class XXLinearSystemModel : public CodeBlock
{

public:
  // Define constructor and destructor
  XXLinearSystemModel(double &u, double &y);
  virtual ~XXLinearSystemModel();

  void execute();

private:

  // Class variables
  double &u;
  double &y;

  LinearSystemModel *m_model;
};

// Close namespace(s)
} } 
