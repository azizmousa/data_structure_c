/*
 * Node.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: A
 */

#ifndef NODE_H_
#define NODE_H_
#include"Typedef.h"
typedef struct stacknode{
	StackEntry entry;
	struct stacknode *next;
}Node;

#endif /* NODE_H_ */
