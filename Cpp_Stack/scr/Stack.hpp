/*
 * Stack.cpp
 *
 *  Created on: Sep 5, 2016
 *      Author: a
 */

#include "Stack.h"

template <class StackEntry>
void Stack<StackEntry>::ClearStack(){
	this->top = 0;
}

template <class StackEntry>
bool Stack<StackEntry>::StackEmpty(){
	return this->top <= 0;
}

template <class StackEntry>
bool Stack<StackEntry>::StackFull(){
	return this->top >= this->MAXSTACK;
}

template <class StackEntry>
int Stack<StackEntry>::StackSize(){
	return this->top;
}

template <class StackEntry>
StackEntry Stack<StackEntry>::StackTop(){
	return *(this->entry + this->top-1);
}

template <class StackEntry>
StackEntry Stack<StackEntry>::pop(){
	return *(this->entry + --this->top);
}

template <class StackEntry>
void Stack<StackEntry>::push(StackEntry e){
	*(this->entry+this->top++) = e;
}

template <class StackEntry>
void Stack<StackEntry>::TraverseStack(void(*pf)(StackEntry))
{
	for(int i = this->top; i>0 ;--i)
		(*pf)(*(this->entry + i-1));
}

