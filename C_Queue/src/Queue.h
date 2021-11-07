/*
 * Queue.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: A
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#include "typedef.h"

typedef struct queue{
	int front;
	int rear;
	int size;
	QueueEntry entry[MAXQUEUE];

}Queue;

void InitializeQueue(Queue*);
void Append(QueueEntry, Queue*);
void Serve(QueueEntry*, Queue*);
int QueueEmpty(Queue*);
int QueueFull(Queue*);
int QueueSize(Queue*);
void QueueTop(QueueEntry *, Queue*);
void ClearQueue(Queue*);
void TraverseQueue(Queue *, void(*)(QueueEntry));
#endif /* QUEUE_H_ */
