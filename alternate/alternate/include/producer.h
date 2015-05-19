/**
 * Header file for the producer model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.1
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#pragma once

#include "csp/CSP.h"

// Models
#include "producer/takeInputs.h"

// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

using namespace LUNA::CSP;

namespace MainModel { namespace producer { 

class producer : public Sequential
{

public:
  // Define constructor and destructor
  producer(ChannelIn<int> *PG0L10PORT, ChannelIn<int> *PG10L20port, ChannelIn<int> *PG20);
  virtual ~producer();


  // Guard evaluation functions
  bool WG0L10GuardEvaluate();
  bool WG10L20GuardEvaluate();
  bool WG20GuardEvaluate();

private:

  // Class variables
  int pVar;

  // Model objects
  Writer<int> *myWG0L10;
  Writer<int> *myWG10L20;
  Writer<int> *myWG20;
  takeInputs::takeInputs *mytakeInputs;

  // Model groups
  Alternative *myALTERNATIVE;

  // protected region additional class members or functions on begin

  // protected region additional class members or functions end
};

// Close namespace(s)
} } 
