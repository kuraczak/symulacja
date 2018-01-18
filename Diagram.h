/*
 * Diagram.h
 *
 *  Created on: 28 gru 2017
 *      Author: kuraczak
 */


#ifndef DIAGRAM_H_
#define DIAGRAM_H_

#include <vector>
#include "Ramp.h"
#include "Worker.h"
#include "Storehouse.h"
#include "Queue.h"

enum TYPE{WORKER, STOREHOUSE, RAMP};


class Diagram {
public:
	Diagram();
	virtual ~Diagram();
	std::vector<Ramp> ramps;
	std::vector<Worker> workers;
	std::vector<Storehouse> storehouses;

	bool add_worker(int id, QUEUE_TYPE queue, int time);
	bool add_ramp(int id, int delivery_interval);
	bool add_store(int id);
	bool add_link(TYPE s_type, int s_id, TYPE r_type, int r_id, float prob);


};

#endif /* DIAGRAM_H_ */
