/**
 * Source file for the controllerTERRA model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "controllerTERRA.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace MainModel { namespace controllerTERRA { 

controllerTERRA::controllerTERRA(ChannelIn<double> *controllerOutput, ChannelOut<double> *linearInput, ChannelOut<double> *stepInput) :
    Sequential(NULL)
{
  SETNAME(this, "controllerTERRA");

  // Initialize model objects
  mycontroller20SIM = new Controller::Controller(linearInput, stepInput, controllerOutput);
  SETNAME(mycontroller20SIM, "controller20SIM");


  // Register model objects
  this->append_child(mycontroller20SIM);

  // protected region constructor on begin
  // protected region constructor end
}

controllerTERRA::~controllerTERRA()
{
  // TODO Properly destroy all additional objects that got defined in the constructor

  // protected region destructor on begin
  // protected region destructor end

  // Destroy model objects
  delete mycontroller20SIM;
}



// protected region additional functions on begin
// protected region additional functions end

// Close namespace(s)
} } 
