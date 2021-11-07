/*
 * Q_Node.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: A
 */

#ifndef Q_NODE_H_
#define Q_NODE_H_
#include "typedef.h"
typedef struct queue_node{
	QueueEntry entry;
	struct queue_node *next;
}Node;

#endif /* Q_NODE_H_ */
