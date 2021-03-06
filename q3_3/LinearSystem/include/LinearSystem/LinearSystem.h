/**
 * Header file for the LinearSystem model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#pragma once

#include "csp/CSP.h"

// Models
#include "XXLinearSystemModel.h"

// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

using namespace LUNA::CSP;

namespace LinearSystem { 

class LinearSystem : public Sequential
{

public:
  // Define constructor and destructor
  LinearSystem(GuardedChannelOut<double> *u, GuardedChannelIn<double> *y);
  virtual ~LinearSystem();

private:

  // Class variables
  double v_u;
  double v_y;

  // Model objects
  XXLinearSystemModel::XXLinearSystemModel *myXXLinearSystemModel;
  GuardedReader<double> *myr_u;
  GuardedWriter<double> *myw_y;

  // Model groups
  Alternative *myALTERNATIVE;



  // protected region additional class members or functions on begin

  // protected region additional class members or functions end
};

// Close namespace(s)
} 
