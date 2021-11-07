//============================================================================
// Name        : Cpp-Stack.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include "Stack.h"

template<typename StackEntry>
void Display(StackEntry e){
	cout<<"Display : "<<e<<endl;
}

int main() {
	Stack<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	cout<<"Stack Top :"<<s.StackTop()<<endl;
	s.TraverseStack(Display);
	cout<<"Stack pop : "<<s.pop()<<endl;
	cout<<"Stack Size : "<<s.StackSize()<<endl;
	s.ClearStack();
	if(!s.StackEmpty())
		cout<<s.StackTop()<<endl;
	else
		cout<<"Stack Empty"<<endl;
	return 0;
}
