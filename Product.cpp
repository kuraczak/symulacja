/*
 * Product.cpp
 *
 *  Created on: 1 sty 2018
 *      Author: Domininia
 */

#include  "Product.h"
#include <ostream>

Product :: Product (int _ID): ID(_ID) {};

int Product :: getID () const
{
	return ID;
}
