/*
 * Ramp.h
 *
 *  Created on: 28 gru 2017
 *      Author: DOmininia
 */

#ifndef RAMP_H_
#define RAMP_H_

#include <iostream>
#include "Sender.h"
#include "Product.h"

class Ramp: public virtual Sender {
public:
	Ramp(int _id = -1, int _delivery_interval=1);
	virtual ~Ramp();
	Product* create_product <int id>;
private:
	int id;
};

#endif /* RAMP_H_ */
