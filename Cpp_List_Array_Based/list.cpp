/*
 * list.cpp
 *
 *  Created on: Dec 1, 2016
 *      Author: A
 */


#include "list.h"
#include <iostream>

using namespace std;
 List::List(){
	 size = 0;
}

bool List::isEmpty()const{
	if(size == 0)
		return true;

	return false;
}

bool List::isFull()const{
	if(size==MAXSIZE){
		return true;
	}


	return false;
}
int List::listSize()const{
	return size;

}

void List::clearList()
{
	size = 0;
}

List::List(const List & origList): size(0)
{
    if (size == 0) return;
    for(int i =0;i< origList.size;++i)
        this->arr[i] = origList.arr[i];

}


void List::insert(int e, int pos){

	for(int i = size ; i > pos;--i)
		arr[i] = arr[i-1];
	arr[pos] = e;
	size++;
}

int List::remove(int pos){
	int temp = arr[pos];
	for(int i = pos; i < size; ++i)
		arr[i] = arr[i+1];
	size--;
	return temp;
}


void List::Display()const{
for(int i =0 ; i< size;i++)
	cout<<arr[i] <<" ";
}

ostream  &operator<<(ostream &os, List &li){

	for(int i = 0; i < li.listSize(); )
		os<<li.remove(i)<<" ";
	return os;
}
