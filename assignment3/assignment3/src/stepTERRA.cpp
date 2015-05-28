/**
 * Source file for the stepTERRA model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "stepTERRA.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace MainModel { namespace stepTERRA { 

stepTERRA::stepTERRA(ChannelIn<double> *stepOutput) :
    Sequential(NULL)
{
  SETNAME(this, "stepTERRA");

  // Initialize model objects
  mystep20SIM = new Step::Step(stepOutput);
  SETNAME(mystep20SIM, "step20SIM");


  // Register model objects
  this->append_child(mystep20SIM);

  // protected region constructor on begin
  // protected region constructor end
}

stepTERRA::~stepTERRA()
{
  // TODO Properly destroy all additional objects that got defined in the constructor

  // protected region destructor on begin
  // protected region destructor end

  // Destroy model objects
  delete mystep20SIM;
}



// protected region additional functions on begin
// protected region additional functions end

// Close namespace(s)
} } 
