/*
 * Stack.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: A
 */

#ifndef STACK_H_
#define STACK_H_
#include "Node.h"
 template<typename ElementType>
class Stack {
public:
	Stack();
	virtual ~Stack();
	void push(ElementType );
	ElementType pop();
	bool StackFull();
	bool StackEmpty();
	ElementType StackTop();
	int StackSize();
	void ClearStack();
	void TraverseStack(void(*)(ElementType));
private:
	Node<ElementType> *top;
	int size;

};
#include "Stack.hpp"
#endif /* STACK_H_ */
