/*
 * LIFO.h
 *
 *  Created on: 1 sty 2018
 *      Author: Domininia
 */

#ifndef LIFO_H_
#define LIFO_H_

#include<iostream>>
#include<queue>
#include"Product.h"
#include"Queue.h"
#include <deque>

class LIFO : public virtual Queue {
private:
	QUEUE_TYPE type;

public:
	 LIFO (QUEUE_TYPE _type);
	 QUEUE_TYPE getQueueType () override;
	 Product* get_next_product () override ; // pobieram z pocz�tku kolejki, usuwam go z kolejki
	 void insert_product ( Product * nowy) override; //dodaje na koniec kolejki
	 bool IsEmpty() const override;
	 int size()const  override;
};



#endif /* LIFO_H_ */
