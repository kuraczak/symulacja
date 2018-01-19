/*
 * LIFO.cpp
 *
 *  Created on: 1 sty 2018
 *      Author: Domininia
 */


#include<iostream>
#include "LIFO.h"
#include<queue>
#include"Product.h"
#include"Queue.h"

LIFO :: LIFO (QUEUE_TYPE _type) : type(_type){};

bool LIFO:: IsEmpty() const {
	return kolejka.empty();
}

int LIFO :: size()const {
	return kolejka.size();
}

void LIFO :: insert_product (const Product* nowy){ // dodaje na koniec
	kolejka.push(nowy); // tak samo tu? co ma byc z tym nowym?
}

}



