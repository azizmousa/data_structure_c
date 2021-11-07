/*
 * Stack.h
 *
 *  Created on: Sep 5, 2016
 *      Author: a
 */

#ifndef STACK_H_
#define STACK_H_

template <class StackEntry>
class Stack {
public:
	Stack(int max){
		// TODO Auto-generated constructor stub
			MAXSTACK = max;
			this->top = 0;
			this->entry = new StackEntry[this->MAXSTACK];
	}
	Stack(){
		this->MAXSTACK = 10;
		this->top = 0;
		this->entry = new StackEntry[this->MAXSTACK];
	}
	virtual ~Stack(){
		// TODO Auto-generated destructor stub
			delete [] this->entry;
	}

	void push(StackEntry);
	StackEntry pop(void);
	bool StackFull();
	bool StackEmpty();
	int StackSize();
	void ClearStack();
	StackEntry StackTop();
	void TraverseStack(void(*)(StackEntry));
private:
	int top;
	int MAXSTACK;
	StackEntry *entry;

};
#include "Stack.hpp"
#endif /* STACK_H_ */
