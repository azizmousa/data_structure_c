/*
 * Queue.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: A
 */


#include "Queue.h"

void InitializeQueue(Queue *pq) {
	pq->front=0;
	pq->rear = -1;
	pq->size = 0;
}

void Append(QueueEntry e, Queue *pq){
	pq->rear = (pq->rear + 1) % MAXQUEUE;
	pq->entry[pq->rear] = e;
	pq->size++;
}

void Serve(QueueEntry *pe, Queue *pq){
	*pe = pq->entry[pq->front];
	pq->front = (pq->front+1) % MAXQUEUE;
	pq->size--;
}

int QueueEmpty(Queue *pq){
	return pq->size <= 0;
}

int QueueFull(Queue *pq){
	return pq->size >= MAXQUEUE;
}

int QueueSize(Queue *pq){
	return pq->size;
}

void QueueTop(QueueEntry *pe, Queue *pq){
	*pe = pq->entry[pq->front];
}

void ClearQueue(Queue *pq){
	pq->front = 0;
	pq->rear = -1;
	pq->size = 0;
}

void TraverseQueue(Queue *pq, void(*pf)(QueueEntry)){
	for(int pos = pq->front, sz = pq->size;sz;sz--){
		(*pf)(pq->entry[pos]);
		pos = (pos +1)%MAXQUEUE;
	}
}
