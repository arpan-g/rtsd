/**
 * Source file for the consumer model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.1
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "consumer.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace MainModel { namespace consumer { 



consumer::consumer(GuardedChannelOut<int> *CG0L10PORT, GuardedChannelOut<int> *CG10L20PORT, GuardedChannelOut<int> *CG20PORT) :
    Alternative()
{
  SETNAME(this, "consumer");

  // Initialize model objects
  myg0l10Reader = new GuardedReader<int>(&g0l10, CG0L10PORT);
  SETNAME(myg0l10Reader, "g0l10Reader");
  myg10l20Reader = new GuardedReader<int>(&g10l20, CG20PORT);
  SETNAME(myg10l20Reader, "g10l20Reader");
  myg20Reader = new GuardedReader<int>(&g20, CG10L20PORT);
  SETNAME(myg20Reader, "g20Reader");
  myreaderG0L10 = new readerG0L10::readerG0L10(g0l10);
  SETNAME(myreaderG0L10, "readerG0L10");
  myreaderG10L20 = new readerG10L20::readerG10L20(g10l20);
  SETNAME(myreaderG10L20, "readerG10L20");
  myreaderG20L30 = new readerG20L30::readerG20L30(g20);
  SETNAME(myreaderG20L30, "readerG20L30");

  // Create SEQUENTIAL_G0 group
  mySEQUENTIAL_G0 = new Sequential(
    (CSPConstruct *) myreaderG0L10,
    NULL
  );
  SETNAME(mySEQUENTIAL_G0, "SEQUENTIAL_G0");

  // Create SEQUENTIAL_G10 group
  mySEQUENTIAL_G10 = new Sequential(
    (CSPConstruct *) myreaderG10L20,
    NULL
  );
  SETNAME(mySEQUENTIAL_G10, "SEQUENTIAL_G10");

  // Create SEQUENTIAL_G20 group
  mySEQUENTIAL_G20 = new Sequential(
    (CSPConstruct *) myreaderG20L30,
    NULL
  );
  SETNAME(mySEQUENTIAL_G20, "SEQUENTIAL_G20");

  // Register sequential groups to Channel Guarded Processes
  myg0l10Reader->setToActivate(mySEQUENTIAL_G0);
  myg10l20Reader->setToActivate(mySEQUENTIAL_G10);
  myg20Reader->setToActivate(mySEQUENTIAL_G20);

  // Register model objects
  this->append_child(myg0l10Reader);
  this->append_child(myg10l20Reader);
  this->append_child(myg20Reader);

  // protected region constructor on begin

  // protected region constructor end
}

consumer::~consumer()
{
  // TODO Properly destroy all additional objects that got defined in the constructor

  // protected region destructor on begin

  // protected region destructor end

  // Destroy model groups
  delete mySEQUENTIAL_G0;
  delete mySEQUENTIAL_G10;
  delete mySEQUENTIAL_G20;

  // Destroy model objects
  delete myreaderG20L30;
  delete myreaderG10L20;
  delete myreaderG0L10;
  delete myg20Reader;
  delete myg10l20Reader;
  delete myg0l10Reader;
}



// protected region additional functions on begin

// protected region additional functions end

// Close namespace(s)
} } 
