/**
 * Header file for the CCode1 model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.1
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#pragma once

#include "csp/CSP.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

using namespace LUNA::CSP;

namespace MainModel { namespace Consumer21 { namespace CCode1 { 

class CCode1 : public CodeBlock
{

public:
  // Define constructor and destructor
  CCode1(int &CCodeaVar);
  virtual ~CCode1();

  void execute();

private:

  // Class variables
  int &CCodeaVar;

  // protected region additional class members or functions on begin

  // protected region additional class members or functions end
};

// Close namespace(s)
} } } 