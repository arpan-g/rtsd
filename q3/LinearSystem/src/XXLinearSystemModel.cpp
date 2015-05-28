/**
 * Source file for the XXLinearSystemModel model
 * Generated by the TERRA CSPm2LUNA generator version 1.1.3
 *
 * 20-sim C++ glue code to connect to LinearSystemModel
 * Modifying this file is absolutely not recommended!
 *
 * protected region document description on begin
 *
 * protected region document description end
 */

#include "XXLinearSystemModel.h"
// protected region additional headers on begin
// Each additional header should get a corresponding dependency in the Makefile
// protected region additional headers end

namespace LinearSystem { namespace XXLinearSystemModel { 

XXLinearSystemModel::XXLinearSystemModel(double &u, double &y) :
    CodeBlock(), u(u), y(y){
  SETNAME(this, "XXLinearSystemModel");

  using namespace LUNA::xxsim;

  m_model = new LinearSystemModel;


  m_model->addInput(&u, XXVARIABLE, 0, 1, 1);


  m_model->addOutput(&y, XXVARIABLE, 1, 1, 1);


  m_model->start();
}

XXLinearSystemModel::~XXLinearSystemModel()
{
    m_model->stop();

	//@todo Clean up adapters

    delete m_model;
}

void XXLinearSystemModel::execute()
{
    m_model->step();
}

// protected region additional functions on begin

// protected region additional functions end

// Close namespace(s)
} } 
