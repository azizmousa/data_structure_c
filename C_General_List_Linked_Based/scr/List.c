/*
 * List.c
 *
 *  Created on: Nov 23, 2016
 *      Author: A
 */


#include "List.h"

void createList(List *pl){
	pl->pfirst = 0;
	pl->size = 0;
}

int isEmptyList(List *pl){
	return pl->size == 0;
}

int isFullList(List *pl){
	return 0;
}

int listSize(List *pl){
	return pl->size;
}

int insertList(int pos, ListEntry e, List *pl){
	Node *pn;
	if(pn = (Node*)malloc((sizeof(Node)))){
		pn->data = e;
		if(pos == 0){
			pn->pnext = pl->pfirst;
			pl->pfirst = pn;
		}
		else{
			Node *pt = pl->pfirst;
			for(int i =0;i<pos-1;++i,pt = pt->pnext);

			pn->pnext = pt->pnext;
			pt->pnext = pn;
		}
		pl->size++;
		return 1;
	}
	return 0;
}

void deleteList(int pos, ListEntry *pe, List *pl){
	Node *pn = pl->pfirst;
	Node *pt;
	if(pos == 0){
		pt = pl->pfirst;
		*pe = pt->data;
		pl->pfirst = pt->pnext;
		free(pt);
	}
	else{
		for(int i =0;i<pos-1;++i,pn = pn->pnext);
		*pe = pn->pnext->data;
		pt = pn->pnext;
		pn->pnext = pn->pnext->pnext;
		free(pt);

	}
	pl->size--;

}

void clearList(List *pl){
	Node *pt = pl->pfirst;
	for(int i =0;i<pl->size;++i,pt = pt->pnext)
		free(pt);
	pl->pfirst = 0;
	pl->size =0;
}

void traverseList(List *pl, void(*pf)(ListEntry)){
	Node *pt = pl->pfirst;
	for(int i =0;i<pl->size;++i){
		(*pf)(pt->data);
		pt = pt->pnext;
	}
}
