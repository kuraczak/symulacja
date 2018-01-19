/*
 * Diagram.cpp
 *
 *  Created on: 28 gru 2017
 *      Author: kuraczak
 */

#include "Diagram.h"

Diagram::Diagram() {
	// TODO Auto-generated constructor stub

}

Diagram::~Diagram() {
	// TODO Auto-generated destructor stub
}

Sender & Diagram::getRefToSender(int id){
	int i=0;
	for(Ramp send:ramps){
		if(send.id==id){
			break;
			return ramps.at(i);
		}
		i++;
	}
	i=0;
	for(Worker work:workers){
			if(work.id==id){
				break;
			}
			i++;
	}
	if(i!=0)
		return ramps.at(i);

};
Receiver & Diagram::getRefToReceiver(int id){
	int i=0;
		for(Storehouse store:storehouses){
			if(store.id==id){
				break;
				return storehouses.at(i);
			}
			i++;
		}
		i=0;
		for(Worker work:workers){
				if(work.id==id){
					break;
				}
				i++;
		}
		if(i!=0)
			return ramps.at(i);

};

bool Diagram::add_worker(int id, QUEUE_TYPE queue, int time){
	workers.push_back(Worker(id,queue,time));

	return true;
};


bool Diagram::add_store(int id){
	storehouses.push_back(Storehouse(id));

	return true;
};

bool Diagram::add_ramp(int id, int delivery_interval){
	ramps.push_back(Ramp(id,delivery_interval));

	return true;
};

bool Diagram::add_link(TYPE s_type, int s_id, TYPE r_type, int r_id, float prob){

};
