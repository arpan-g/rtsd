/**
 * Source file for the PCode1ch1con1 model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.1
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "Producer12/PCode1ch1con1.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace MainModel { namespace Producer12 { namespace PCode1ch1con1 { 

PCode1ch1con1::PCode1ch1con1(int &pCh1) :
    CodeBlock(), pCh1(pCh1){
  SETNAME(this, "PCode1ch1con1");

  // protected region constructor on begin

  // protected region constructor end
}

PCode1ch1con1::~PCode1ch1con1()
{
  // protected region destructor on begin

  // protected region destructor end
}

void PCode1ch1con1::execute()
{
  // protected region execute code on begin
	pCh1 =10;
	printf("producer generated %d \n",pCh1);
  // protected region execute code end
}

// protected region additional functions on begin

// protected region additional functions end

// Close namespace(s)
} } } 
