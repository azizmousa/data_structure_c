/*
 * List.h
 *
 *  Created on: Nov 23, 2016
 *      Author: A
 */

#ifndef LIST_H_
#define LIST_H_
#include "Node.h"
#include <stdlib.h>
typedef struct list{
	Node *pfirst;
	int size;
}List;

void createList(List *pl);
int isEmptyList(List *pl);
int isFullList(List *pl);
int listSize(List *pl);
int insertList(int pos, ListEntry e, List *pl);
void deleteList(int pos, ListEntry *pe, List *pl);
void clearList(List *pl);
void traverseList(List *pl, void(*pf)(ListEntry));

#endif /* LIST_H_ */
