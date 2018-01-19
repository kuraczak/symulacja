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
	reciver.insert ( std::pair<Receiver*,float>(r,probability));
}
void Sender::rem_dest_node(Receiver* r){
	reciver.erase (r);
}
Receiver* Sender::calc_next_owner(){
	float liczba = (float)rand() /RAND_MAX;
	float tmp=0;
	for (std::map<Receiver*,float>::iterator it=reciver.begin(); it!=reciver.end(); ++it){
		tmp+=it->second;
		if (liczba<tmp) return it->first;
	}

}
void Sender::probability_solve(){
	float tmp=0;
	for (std::map<Receiver*,float>::iterator it=reciver.begin(); it!=reciver.end(); ++it){
		tmp+=it->second;
	}
	for (std::map<Receiver*,float>::iterator it=reciver.begin(); it!=reciver.end(); ++it){
			it->second=it->second/tmp;
		}
}

