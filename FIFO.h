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

public:

	 void get_next_product (const Product* & queue)override;
	 Product* insert_product(Product nowy)override ;
	 Product* view()override;
	 bool IsEmpty() const override;
	 int size()const  override;

};

#endif /* FIFO_H_ */
