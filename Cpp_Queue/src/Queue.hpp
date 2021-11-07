/*
 * Queue.cpp
 *
 *  Created on: ??þ/??þ/????
 *      Author: A
 */

#include "Queue.h"


template <class QueueEntry>
void Queue<QueueEntry>::Append(QueueEntry e){
	this->rear = (this->rear + 1) % MAXQUEUE;
	this->entry[this->rear] = e;
	this->size++;
}
template <class QueueEntry>
QueueEntry Queue<QueueEntry>::Serve(){
	QueueEntry e = this->entry[this->front];
	this->front = (this->front +1) % MAXQUEUE;
	this->size--;
	return e;
}

template <class QueueEntry>
bool Queue<QueueEntry>::QueueEmpty(){
	return this->size <=0;
}

template <class QueueEntry>
bool Queue<QueueEntry>::QueueFull(){
	return this->size >= MAXQUEUE;
}

template <class QueueEntry>
QueueEntry Queue<QueueEntry>::QueueTop(){
	return this->entry[this->front];
}

template <class QueueEntry>
int Queue<QueueEntry>::QueueSize(){
	return this->size;
}

template <class QueueEntry>
void Queue<QueueEntry>::ClearQueue(){
	this->front =0;
	this->rear = -1;
	this->size = 0;
}

template <class QueueEntry>
void Queue<QueueEntry>::TraverseQueue(void(*pf)(QueueEntry)){
	for(int pos = this->front, siz = this->size; siz; siz--){
		(*pf)(this->entry[pos]);
		pos = (pos+1)%MAXQUEUE;
	}
}
