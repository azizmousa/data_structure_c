/*
 * Stack.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: A
 */

#ifndef STACK_H_
#define STACK_H_

#include <stdio.h>
#include <stdlib.h>
#include "Typedef.h"
#include "Node.h"

typedef struct stack{
	Node *top;
	int size;

}Stack;
void InitializeStack(Stack *);
void push(StackEntry, Stack *);
void pop(StackEntry *, Stack *);
int StackFull(Stack *);
int StackEmpty(Stack *);
int StackSize(Stack *);
void StackTop(StackEntry *, Stack *);
void ClearStack(Stack *);
void TraverseStack(Stack *, void(*)(StackEntry));
#endif /* STACK_H_ */
