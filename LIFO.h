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

class LIFO : public virtual Queue {
private:
	QUEUE_TYPE type;

public:
	 FIFO (QUEUE_TYPE _type = LIFO);
	 QUEUE_TYPE getQueueType () override;
	 Product& get_next_product (std::queue< Product* > & kolejka) override ; // pobieram z pocz¹tku kolejki, usuwam go z kolejki
	 void insert_product (const Product * nowy) override; //dodaje na koniec kolejki
	 Product* view()override;
	 bool IsEmpty() const override;
	 int size()const  override;
};



#endif /* LIFO_H_ */
