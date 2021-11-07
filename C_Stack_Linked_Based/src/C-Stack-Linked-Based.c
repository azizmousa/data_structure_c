/*
 ============================================================================
 Name        : C-Stack-Linked-Based.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

void Display(StackEntry e)
{
	printf("Display : %i\n",e);
}

int main(void) {
	Stack s;
	StackEntry e;
	InitializeStack(&s);

	if(!StackFull(&s))
		push(10, &s);
	if(!StackFull(&s))
		push(20, &s);
	if(!StackFull(&s))
		push(30, &s);

	StackTop(&e, &s);
	printf("Stack Top : %i\n",e);
	int x = StackSize(&s);
	printf("Stack Size : %i\n",x);
	if(!StackEmpty(&s))
		pop(&e, &s);
	printf("Stack pop : %i\n",e);
	TraverseStack(&s, Display);
	ClearStack(&s);
	if(!StackEmpty(&s))
		pop(&e, &s);
	else
		puts("Stack Empty .\n");
	return EXIT_SUCCESS;
}
