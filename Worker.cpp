/*
 * Worker.cpp
 *
 *  Created on: 28 gru 2017
 *      Author: Domininia
 */

#include "Worker.h"

Worker::Worker(int _id, QUEUE_TYPE _queue, int time) {
	id=_id;
	processing_time	=	time;
	if(_queue==FIFO)
		*queue= new FIFO();
	else
		*queue=new LIFO();

	// TODO Auto-generated constructor stub

}

Worker::~Worker() {
	// TODO Auto-generated destructor stub
}

