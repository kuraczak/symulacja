/*
 * Sender.h
 *
 *  Created on: 28 gru 2017
 *      Author: rafal
 */

#ifndef SENDER_H_
#define SENDER_H_

#include<map>
#include<iostream>
#include"Receiver.h"
class Sender {
private:
	std::map<Receiver*,float> receiver;

public:
	int processing_time;
	Sender();
	~Sender();
	void add_dest_node(Receiver* r, float probability);
	void rem_dest_node(Receiver* r);
	Receiver* calc_next_owner();
	void probability_solve();
	int getProcessingTime() const {return processing_time;}
    std::map<Receiver*, float> getReciver() const {return receiver;}
};

#endif /* SENDER_H_ */
