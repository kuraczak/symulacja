/*
 * Storehouse.h
 *
 *  Created on: 28 gru 2017
 *      Author: kuraczak
 */

#ifndef STOREHOUSE_H_
#define STOREHOUSE_H_

#include "Receiver.h"
#include "Sender.h"

class Storehouse: public virtual Sender, public virtual Receiver {
public:
	Storehouse();
	virtual ~Storehouse();
};

#endif /* STOREHOUSE_H_ */
