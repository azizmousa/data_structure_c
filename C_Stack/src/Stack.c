/*
 * Stack.c
 *
 *  Created on: Sep 4, 2016
 *      Author: a
 */

#include "Stack.h"

void InitializeStack(Stack *ps)
{
	ps->top = 0;
}
int StackFull(Stack *ps)
{
	return ps->top >= MAXSTACK;
}
int StackEmpty(Stack *ps)
{
	return ps->top <= 0;
}
void push(StackEntry e, Stack *ps)
{
	ps->entry[ps->top++] = e;
}
void pop(StackEntry *pe, Stack *ps)
{
	*pe = ps->entry[--ps->top];
}
int StackSize(Stack *ps)
{return ps->top;}
void ClearStack(Stack *ps)
{
	ps->top = 0;
}
void StackTop(StackEntry *pe,Stack *ps)
{
	*pe = ps->entry[ps->top-1];
}
void TraverseStack(Stack *ps, void(*pf)(StackEntry))
{
	for(int i = ps->top; i>0; --i)
		(*pf)(ps->entry[i -1]);
}
