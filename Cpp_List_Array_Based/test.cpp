/*
 * test.cpp
 *
 *  Created on: Dec 4, 2016
 *      Author: A
 */


#include <iostream>
#include "list.h"
using namespace std;

double sum(double x, int y){
	return x+y;
}

double sum(int x, double y){
	return x+y;
}


int main(){
	List l1;
	if(!l1.isFull())
		l1.insert(1,0);
	if(!l1.isFull())
		l1.insert(2,0);
	if(!l1.isFull())
		l1.insert(3,0);
	if(!l1.isFull())
		l1.insert(4,0);
	if(!l1.isFull())
		l1.insert(5,0);
	if(!l1.isFull())
		l1.insert(3,0);
	//l1.clearList();
	int x = l1.remove(1);
	cout<<l1;
	cout<<endl<<x<<endl;
	return 0;
}
