/*
 * FIFO.h
 *
 *  Created on: 1 sty 2018
 *      Author: Domininia
 */

#ifndef FIFO_H_
#define FIFO_H_

#include<iostream>
#include<queue>
#include"Product.h"
#include"Queue.h"


class FIFO : public virtual Queue {
private:
	QUEUE_TYPE type;

public:
	 FIFO (QUEUE_TYPE _type);
	 QUEUE_TYPE getQueueType () override;
	 Product* get_next_product () ; // pobieram z pocz�tku kolejki, usuwam go z kolejki
	 void insert_product (Product * nowy) override; //dodaje na koniec kolejki
	 bool IsEmpty() const override;
	 int size()const  override;
};

#endif /* FIFO_H_ */
