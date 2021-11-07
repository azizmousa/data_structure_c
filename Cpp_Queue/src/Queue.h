/*
 * Queue.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: A
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#define MAXQUEUE 10

template <class QueueEntry>
class Queue {
public:
	Queue():front(0), rear(-1), size(0) {
		// TODO Auto-generated constructor stub

	}
	~Queue(){}
	void Append(QueueEntry);
	QueueEntry Serve();
	bool QueueFull();
	bool QueueEmpty();
	int QueueSize();
	QueueEntry QueueTop();
	void ClearQueue();
	void TraverseQueue(void(*pf)(QueueEntry));
private:
	int front, rear, size;
	QueueEntry entry[MAXQUEUE];
};
#include "Queue.hpp"
#endif /* QUEUE_H_ */
