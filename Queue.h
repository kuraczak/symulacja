/*
 * Queue.h
 *
 *  Created on: 1 sty 2018
 *      Author: Domininia
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include<iostream>
#include"Product.h"
#include<queue>

class Queue{
private:
	std:: queue<Product*> kolejka;

public:
	virtual ~Queue()=0;
	virtual Product get_next_product (Product* kolejka)=0;
	virtual Product* insert_product(Product nowy)=0;
	virtual Product* view()=0;
	virtual bool IsEmpty(kolejka) =0;
	virtual int size(Product* kolejka)=0;
};


#endif /* QUEUE_H_ */
