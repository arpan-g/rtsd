/**
 * Source file for the controllerTerra model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "controllerTerra.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace MainModel { namespace controllerTerra { 

controllerTerra::controllerTerra(ChannelIn<double> *controllerOutput, ChannelOut<double> *linearSystemToControllerInput, ChannelOut<double> *stepInput) :
    Sequential(NULL)
{
  SETNAME(this, "controllerTerra");

  // Initialize model objects
  mycontroller20Sim = new Controller::Controller(linearSystemToControllerInput, stepInput, controllerOutput);
  SETNAME(mycontroller20Sim, "controller20Sim");


  // Register model objects
  this->append_child(mycontroller20Sim);

  // protected region constructor on begin

  // protected region constructor end
}

controllerTerra::~controllerTerra()
{
  // TODO Properly destroy all additional objects that got defined in the constructor

  // protected region destructor on begin

  // protected region destructor end

  // Destroy model objects
  delete mycontroller20Sim;
}



// protected region additional functions on begin

// protected region additional functions end

// Close namespace(s)
} } 
