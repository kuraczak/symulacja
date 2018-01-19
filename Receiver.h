/*
 * Receiver.h
 *
 *  Created on: 28 gru 2017
 *      Author: kuraczak
 */

#ifndef RECEIVER_H_
#define RECEIVER_H_
#include <iostream>
#include <vector>
#include "Product.h"

class Receiver {
public:
	Receiver();
	~Receiver();
	void addProduct(Product* product);
private:
	std::vector<Product*> product_list;
};

#endif /* RECEIVER_H_ */
