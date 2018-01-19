/*
 * Worker.h
 *
 *  Created on: 28 gru 2017
 *      Author: Domininia
 */

#ifndef WORKER_H_
#define WORKER_H_

#include "Queue.h"
#include "FIFO.h"
#include "LIFO.h"

class Worker {
public:
	int id;
	Queue*  queue;


	Worker(int _id, QUEUE_TYPE _queue, int time );
	virtual ~Worker();
};

#endif /* WORKER_H_ */
