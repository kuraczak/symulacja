/*
 * Product.h
 *
 *  Created on: 1 sty 2018
 *      Author: Domininia
 */

#ifndef PRODUCT_H_
#define PRODUCT_H_

#include<iostream>

class Product{
private:
	int ID;

public:
	int getID () const;
	Product (int _ID=0);
};

#endif /* PRODUCT_H_ */
