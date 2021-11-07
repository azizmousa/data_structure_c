/*
 * Queue.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: A
 */

#include "Queue.h"

void InitializeQueue(Queue *pq){
	pq->front = NULL;
	pq->rear = NULL;
	pq->size = 0;
}

void Append(QueueEntry e, Queue *pq){
	Node *pn = (Node*)malloc((sizeof(Node)));
	pn->next = NULL;
	pn->entry = e;
	if(!pq->rear)
		pq->front = pn;
	else
		pq->rear->next = pn;
	pq->rear = pn;
	pq->size++;
}

void Serve(QueueEntry *pe, Queue *pq){
	Node *pn = pq->front;
	pq->front = pn->next;
	*pe = pn->entry;
	free(pn);
	if(!pq->front)
		pq->rear = NULL;
	pq->size--;
}

void QueueTop(QueueEntry *pe, Queue *pq){
	*pe = pq->front->entry;
}

int QueueFull(Queue *pq){
	return 0;
}

int QueueEmpty(Queue *pq){
	return pq->size == 0;
}

int QueueSize(Queue *pq){
	return pq->size;
}

void ClearQueue(Queue *pq){
	Node *pn = pq->front;
	while(pq->size){
		pq->front = pq->front->next;
		free(pn);
		pn = pq->front;
		pq->size--;
	}
	pq->rear = NULL;
}

void TraverseQueue(Queue *pq, void(*pf)(QueueEntry)){
	Node *pn = pq->front;
	for(int i =0;i<pq->size;i++){
		(*pf)(pn->entry);
		pn = pn->next;
	}
}
