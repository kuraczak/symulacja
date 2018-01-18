/*
 * Sender.h
 *
 *  Created on: 28 gru 2017
 *      Author: rafal
 */

#ifndef SENDER_H_
#define SENDER_H_

#include<map>
#include"Receiver.h"
class Sender {
private:
	std::map<Receiver*,float> reciver;
	int processing_time;
public:
	Sender();
	virtual ~Sender();
	void add_dest_node(int id, float probability);
	void rem_dest_node(int id);
	Receiver* calc_next_owner();
	void probability_solve(float probability);
};

#endif /* SENDER_H_ */
