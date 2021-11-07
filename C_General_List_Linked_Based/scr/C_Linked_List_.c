/*
 * C_Linked_List_.c
 *
 *  Created on: Nov 23, 2016
 *      Author: A
 */


#include <stdio.h>
#include "List.h"

void Display(int e){
	printf("asf :%d\n", e);
}

int main(){

	List l;
	createList(&l);

	 insertList(0,1,&l);
	//printf("size  = %d\n", x);
	insertList(1,2,&l);
	insertList(2,3,&l);
	insertList(3,4,&l);
	traverseList(&l, Display);
	printf("size  = %d\n", listSize(&l));
	printf("--------------------\n");
	int e = 0;
	deleteList(3, &e,&l);
	printf("e  = %d\n", e);
	traverseList(&l, Display);

	return 0;
}
