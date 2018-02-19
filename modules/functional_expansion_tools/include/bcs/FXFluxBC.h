//* This file is part of the MOOSE framework
//* https://www.mooseframework.org
//*
//* All rights reserved, see COPYRIGHT for full restrictions
//* https://github.com/idaholab/moose/blob/master/COPYRIGHT
//*
//* Licensed under LGPL 2.1, please see LICENSE for details
//* https://www.gnu.org/licenses/lgpl-2.1.html

#ifndef FXFLUXBC_H
#define FXFLUXBC_H

#include "FunctionNeumannBC.h"

class FXFluxBC;

template <>
InputParameters validParams<FXFluxBC>();

/**
 * Defines an FX-based BC that strongly encourages the gradients to match
 */
class FXFluxBC : public FunctionNeumannBC
{
public:
  FXFluxBC(const InputParameters & parameters);
};

#endif // FXFLUXBC_H