/*
 * Receiver.cpp
 *
 *  Created on: 28 gru 2017
 *      Author: Domininia
 */

#include "Receiver.h"

Receiver::Receiver() {
	// TODO Auto-generated constructor stub

}
Receiver::~Receiver() {
	// TODO Auto-generated destructor stub
}
void Receiver::addProduct(Product* product){
	product_list.push_back(product);
}

