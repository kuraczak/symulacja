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

FIFO :: FIFO (QUEUE_TYPE _type) : type(_type){};

bool FIFO:: IsEmpty() const {
	return kolejka.empty();
}

int FIFO :: size()const {
	return kolejka.size();
}

void FIFO :: insert_product (Product* nowy){ // dodaje na koniec
	kolejka.push(nowy);
}

Product & FIFO :: get_next_product () { // pobieram z pocz¹tku
	Product  do_wydania = kolejka.front();
	kolejka.pop(); // usuwam pierwszy element z kolejki
	return do_wydania;
}


