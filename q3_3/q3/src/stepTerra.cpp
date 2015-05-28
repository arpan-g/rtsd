/**
 * Source file for the stepTerra model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "stepTerra.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace MainModel { namespace stepTerra { 

stepTerra::stepTerra(ChannelIn<double> *stepOutput) :
    Sequential(NULL)
{
  SETNAME(this, "stepTerra");

  // Initialize model objects
  mystep20Sim = new Step::Step(stepOutput);
  SETNAME(mystep20Sim, "step20Sim");


  // Register model objects
  this->append_child(mystep20Sim);

  // protected region constructor on begin

  // protected region constructor end
}

stepTerra::~stepTerra()
{
  // TODO Properly destroy all additional objects that got defined in the constructor

  // protected region destructor on begin

  // protected region destructor end

  // Destroy model objects
  delete mystep20Sim;
}



// protected region additional functions on begin

// protected region additional functions end

// Close namespace(s)
} } 