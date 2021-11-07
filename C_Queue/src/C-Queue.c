/*
 ============================================================================
 Name        : C-Queue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

void Display(QueueEntry e){
	printf("Disp : %i\n",e);
}

int main(void) {
	Queue q1;
	InitializeQueue(&q1);
	if(!QueueFull(&q1))
		Append(1, &q1);
	if(!QueueFull(&q1))
		Append(2, &q1);
	if(!QueueFull(&q1))
		Append(3, &q1);
	if(!QueueFull(&q1))
		Append(4, &q1);
	if(!QueueFull(&q1))
		Append(5, &q1);
	else
			puts("Queue Full\n");
	if(!QueueFull(&q1))
		Append(6, &q1);
	else
		puts("Queue Full\n");

	QueueEntry e;
	for(int i =6;i>0;i--){

		if(!QueueEmpty(&q1))
			Serve(&e, &q1);

		else
			puts("Queue Empty :");
		printf("E : %i\n",e);
	}

	if(!QueueFull(&q1))
		Append(7, &q1);
	if(!QueueFull(&q1))
		Append(8, &q1);
	if(!QueueFull(&q1))
		Append(9, &q1);
	TraverseQueue(&q1,&Display);
	return EXIT_SUCCESS;
}
