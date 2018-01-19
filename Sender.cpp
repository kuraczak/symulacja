/*
 * Sender.cpp
 *
 *  Created on: 28 gru 2017
 *      Author: kuraczak
 */

#include "Sender.h"
#include <cstdlib>

Sender::Sender() {
	// TODO Auto-generated constructor stub

}
Sender::~Sender() {
	// TODO Auto-generated destructor stub
}
void Sender::add_dest_node(Receiver* r, float probability){
	receiver.insert ( std::pair<Receiver*,float>(r,probability));
}
void Sender::rem_dest_node(Receiver* r){
	receiver.erase (r);
	probability_solve();
}
Receiver* Sender::calc_next_owner(){
	float liczba = (float)rand() /RAND_MAX;
	float tmp=0;
	for (std::map<Receiver*,float>::iterator it=receiver.begin(); it!=receiver.end(); ++it){
		tmp+=it->second;
		if (liczba<tmp) return it->first;
	}
	return receiver.begin()->first;
}
void Sender::probability_solve(){
	float tmp=0;
	for (std::map<Receiver*,float>::iterator it=receiver.begin(); it!=receiver.end(); ++it){
		tmp+=it->second;
	}
	for (std::map<Receiver*,float>::iterator it=receiver.begin(); it!=receiver.end(); ++it){
			it->second=it->second/tmp;
		}
}

