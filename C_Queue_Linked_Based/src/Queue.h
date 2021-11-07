/*
 * Queue.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: A
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#include "Q_Node.h"
#include "typedef.h"
#include <stdio.h>
#include <stdlib.h>
typedef struct queue{
	Node *front;
	Node *rear;
	int size;
}Queue;

void InitializeQueue(Queue *);
void Append(QueueEntry, Queue*);
void Serve(QueueEntry*, Queue*);
void QueueTop(QueueEntry*, Queue*);
int QueueFull(Queue*);
int QueueEmpty(Queue*);
int QueueSize(Queue*);
void ClearQueue(Queue*);
void TraverseQueue(Queue*, void(*)(QueueEntry));

#endif /* QUEUE_H_ */
