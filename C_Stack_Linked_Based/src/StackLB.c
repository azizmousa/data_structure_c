/*
 * StackLB.c
 *
 *  Created on: ??ş/??ş/????
 *      Author: A
 */


#include "Stack.h"

void InitializeStack(Stack *ps)
{
	ps->top = NULL;
	ps->size = 0;
}

void push(StackEntry pe, Stack *ps){

	Node *pn = (Node*) malloc(sizeof(Node));
	pn->next = ps->top;
	pn->entry = pe;
	ps->top = pn;
	ps->size++;
}
void pop(StackEntry *pe, Stack *ps){
	*pe = ps->top->entry;
	Node *pn = ps->top;
	ps->top = ps->top->next;
	free(pn);
	ps->size--;
}
int StackFull(Stack *ps){
	return 0;
}
int StackEmpty(Stack *ps){
	return !ps->top;
}
int StackSize(Stack *ps){
	return ps->size;
}
void StackTop(StackEntry *pe, Stack *ps){
	*pe = ps->top->entry;
}
void ClearStack(Stack *ps){
	Node *pn = ps->top;
	while(pn){
		pn = ps->top->next;
		free(ps->top);
		ps->top = pn;
	}
	ps->size = 0;
}

void TraverseStack(Stack *ps, void(*pf)(StackEntry)){
	for(Node *pn = ps->top; pn!= NULL ;pn = pn->next)
		(*pf)(pn->entry);
}
