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
	 Product get_next_product (Product* kolejka)override;
	 Product* insert_product(Product nowy)override ;
	 Product* view()override;
	 bool IsEmpty()override;
	 int size(Product* kolejka) override;

};

#endif /* FIFO_H_ */
