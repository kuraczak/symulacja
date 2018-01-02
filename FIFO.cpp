/*
 * FIFO.cpp
 *
 *  Created on: 1 sty 2018
 *      Author: Domininia
 */

#include<iostream>
#include "FIFO.h"
#include<queue>
#include"Product.h"
#include"Queue.h"

bool FIFO:: IsEmpty() const {
	return kolejka.empty();
}

int FIFO :: size()const {
	return kolejka.size();
}
