/**
 * Source file for the readerG20L30 model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.1
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "consumer/readerG20L30.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace MainModel { namespace consumer { namespace readerG20L30 { 

readerG20L30::readerG20L30(int &pCode) :
    CodeBlock(), pCode(pCode){
  SETNAME(this, "readerG20L30");

  // protected region constructor on begin

  // protected region constructor end
}

readerG20L30::~readerG20L30()
{
  // protected region destructor on begin

  // protected region destructor end
}

void readerG20L30::execute()
{
  // protected region execute code on begin
	printf("negative number %d \n",pCode);
  // protected region execute code end
}

// protected region additional functions on begin

// protected region additional functions end

// Close namespace(s)
} } } 
