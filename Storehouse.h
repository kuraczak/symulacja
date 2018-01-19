/*
 * Storehouse.h
 *
 *  Created on: 28 gru 2017
 *      Author: Domininia
 */

#ifndef STOREHOUSE_H_
#define STOREHOUSE_H_

#include "Receiver.h"

class Storehouse: public virtual Receiver {
private:
	int id;

public:
	Storehouse( int _ID=0 );
	virtual ~Storehouse();

	int getId() const {
		return id;
	}
};

#endif /* STOREHOUSE_H_ */
