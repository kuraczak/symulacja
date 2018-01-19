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
#include<deque>

enum QUEUE_TYPE{FIFO,LIFO};

class Queue{

public:
	std::deque< Product* > kolejka;
	virtual QUEUE_TYPE getQueueType ()=0;
	virtual ~Queue()=0;
	virtual Product&  get_next_product ()=0;
	virtual void insert_product(const Product*  )=0;
	virtual bool IsEmpty() const = 0;
	virtual int size()const = 0;
};


#endif /* QUEUE_H_ */
