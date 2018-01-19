/*
 * Receiver.h
 *
 *  Created on: 28 gru 2017
 *      Author: kuraczak
 */

#ifndef RECEIVER_H_
#define RECEIVER_H_
#include <iostream>
#include "Product.h"
#include "Worker.h"
#include "Storehouse.h"


class Receiver {
public:
	Receiver();
	virtual ~Receiver();
private:
	vector<Product*> product_list;
};

#endif /* RECEIVER_H_ */
