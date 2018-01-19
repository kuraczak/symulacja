/*
 * Ramp.cpp
 *
 *  Created on: 28 gru 2017
 *      Author: Domininia
 */

#include<iostream>
#include"Sender.h"
#include"Product.h"
#include "Ramp.h"

Ramp::Ramp(int _id, int _delivery_interval) : id(_id), processing_time(_delivery_interval) {}

Ramp::~Ramp() {}

