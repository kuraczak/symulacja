/*
 * Simulation.cpp
 *
 *  Created on: 10 sty 2018
 *      Author: kuraczak
 */
#include "Simulation.h"



using namespace std;

vector<string> getDataFromLine(int numOfData, string line) {
	vector<string> tmp;
	int p = 0;
	int k = 0;
	for (int i = 0; i < numOfData; i++) {
		p = line.find("=", k);
		k = line.find(" ", p);
		tmp.push_back(line.substr(p + 1, k - p - 1));
	}
	return tmp;

};

bool loadfile(std::string filename, Diagram diag) {
	ifstream plik;
	plik.open(filename);
	string line;
	string type;
	string id;

	while (!plik.eof()) {
		std::getline(plik, line);
		//cout << line << endl << endl;
		int p = 0;
		int k = line.find(" ");

		type = line.substr(p, k);
		if (type == "WORKER") {
			vector<string> data = getDataFromLine(3, line);
			int id = std::stoi(data[0]);
			int processing_time = std::stoi(data[1]);
			QUEUE_TYPE typ;
			if (data[2] == "FIFO")
				QUEUE_TYPE typ = FIFO;
			else
				QUEUE_TYPE typ = LIFO;
			//cout<<id<<" "<<processing_time<< " "<< typ <<endl;
			diag.add_worker(id,typ,processing_time);



		} else if (type == "STOREHOUSE") {

			vector<string> data = getDataFromLine(1, line);
			int id = std::stoi(data[0]);
			diag.add_store(id);

			//cout<<id<<endl;

		}  else if (type == "LOADING_RAMP") {
			vector<string> data = getDataFromLine(2, line);
			int id = std::stoi(data[0]);
			int delivery_interval = std::stoi(data[1]);
			diag.add_ramp(id,delivery_interval);
			//cout<<id<<" "<<delivery_interval<<endl;
		}else if (type == "LINK") {
			vector<string> data = getDataFromLine(3, line);
			TYPE s_type;
			TYPE r_type;

			string src_type = data[0].substr(0, data[0].find("-"));
			int srcid = std::stoi(data[0].substr(data[0].find("-") + 1, -1));
			if(src_type=="LOADING_RAMP")
				 s_type=RAMP;
			else
				 s_type=WORKER;


			string dest_type = data[1].substr(0, data[1].find("-"));
			int dest_id = std::stoi(data[1].substr(data[1].find("-") + 1, -1));
			if(dest_type=="WORKER")
				 r_type=WORKER;
			else
				 r_type=STOREHOUSE;

			double probab = std::stof(data[2]);
			diag.add_link(s_type,srcid,r_type,dest_id,probab);

			//std::cout<<src_type<<" "<<srcid<<" "<<dest_type<<" "<<destid<< " "<<probab<<endl;

		} else {
			continue;
		}

	}
};

