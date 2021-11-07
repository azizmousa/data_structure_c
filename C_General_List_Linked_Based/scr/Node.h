/*
 * Node.h
 *
 *  Created on: Nov 23, 2016
 *      Author: A
 */

#ifndef NODE_H_
#define NODE_H_
#include "typedef.h"
typedef struct nodelist{
	ListEntry data;
	struct nodelist *pnext;
}Node;

#endif /* NODE_H_ */
