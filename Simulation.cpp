/*
 * Simulation.cpp
 *
 *  Created on: 10 sty 2018
 *      Author: kuraczak
 */

#include "Simulation.h"



	using namespace std;

bool loadfile(std::string filename){
	ifstream plik;
	plik.open(filename);
	string line;
	string type;
	string id;

	while(!plik.eof()){
		std::getline(plik, line);
			//cout<<line;
			type = line.substr(0,line.find(" "));
			if(type=="WORKER"){

			}else if (type=="STOREHOUSE"){
				id=line.substr(line.find("<")+1,line.find(">")-line.find("<")-1);
				cout<<id;
			}else if(type=="LINK"){

			}else if(type=="RAMP"){

			}else{
				continue;
			}



	}
}
