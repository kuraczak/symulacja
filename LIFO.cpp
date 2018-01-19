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
#include <deque>

LIFO :: LIFO (QUEUE_TYPE _type) : type(_type){};

bool LIFO:: IsEmpty() const {
	return kolejka.empty();
}

int LIFO :: size()const {
	return kolejka.size();
}

void LIFO::insert_product ( Product* nowy){ // dodaje na pocz�tek
	kolejka.push_front(nowy);
}

Product * LIFO :: get_next_product () { // pobieram z pocz�tku
	Product*  do_wydania = kolejka.front();
	kolejka.pop_front(); // usuwam pierwszy element z kolejki
	return do_wydania;
}


