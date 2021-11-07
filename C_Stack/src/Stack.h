/*
 * Stack.h
 *
 *  Created on: Sep 4, 2016
 *      Author: a
 */

#ifndef STACK_H_
#define STACK_H_
#include "typedef.h"
typedef struct stack{
	int top;
	StackEntry entry[MAXSTACK];
}Stack;

void InitializeStack(Stack *);
int StackFull(Stack *);
int StackEmpty(Stack *);
void push(StackEntry, Stack *);
void pop(StackEntry *, Stack *);
int StackSize(Stack *);
void ClearStack(Stack *);
void StackTop(StackEntry *, Stack *);
void TraverseStack(Stack *, void(*)(StackEntry));

#endif /* STACK_H_ */
