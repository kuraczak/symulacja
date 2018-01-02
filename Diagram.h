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


class Diagram {
public:
	Diagram();
	virtual ~Diagram();
	std::vector<Ramp> ramps;
	std::vector<Worker> workers;
	std::vector<Storehouse> storehouses;

	bool add_worker(int id, QUEUE_TYPE queue, int time);
private:

};

#endif /* DIAGRAM_H_ */
