/**
 * Header file for the linearSystemTerra model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#pragma once

#include "csp/CSP.h"

// Models
#include "LinearSystem/LinearSystem.h"

// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

using namespace LUNA::CSP;

namespace MainModel { namespace linearSystemTerra { 

class linearSystemTerra : public Sequential
{

public:
  // Define constructor and destructor
  linearSystemTerra(ChannelOut<double> *linearSystemInputTerra, ChannelIn<double> *linearSystemOutput);
  virtual ~linearSystemTerra();

private:

  // Model objects
  LinearSystem::LinearSystem *mylinearSystem20Sim;



  // protected region additional class members or functions on begin

  // protected region additional class members or functions end
};

// Close namespace(s)
} } 