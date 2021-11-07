/*
 * Stack.cpp
 *
 *  Created on: ??þ/??þ/????
 *      Author: A
 */

#include "Stack.h"


//void ClearStack();

//constructor initialize the Stack class state
template <class NodeEntry>
Stack<NodeEntry>::Stack() {
	// TODO Auto-generated constructor stub
	this->top = 0;
	this->size = 0;
}
//class destructor
template <class NodeEntry>
Stack<NodeEntry>::~Stack() {
	// TODO Auto-generated destructor stub
	if(!StackEmpty())
		ClearStack();
}

//function to push new element to stack
template <class NodeEntry>
void Stack<NodeEntry>::push(NodeEntry data){
	Node<NodeEntry> *pn = new Node<NodeEntry>;
	pn->next = this->top;
	pn->entry = data;
	this->top = pn;
	this->size++;

}

//function t pop the top element from stack
template <class NodeEntry>
NodeEntry Stack<NodeEntry>::pop(){
	Node<NodeEntry> *pn = this->top;//create Temp pointers to Node
	NodeEntry e = this->top->entry;//store top entry in pointer to node
	this->top = this->top->next;//make top pointer equal next node
	delete pn;//delete the previous top pointer from memory
	this->size--;//minimize the size of stack
	return e;//return the data which stored from the previous top element

}
//function check if Stack is Full
template <class NodeEntry>
bool Stack<NodeEntry>::StackFull(){
	return 0;
}

//function check if Stack IS Empty
template <class NodeEntry>
bool Stack<NodeEntry>::StackEmpty(){
	return this->size==0;
}

//function get Stack Top element without pop
template <class NodeEntry>
NodeEntry Stack<NodeEntry>::StackTop(){
	return this->top->entry;
}
//function to return the size of stack
template <class NodeEntry>
int Stack<NodeEntry>::StackSize(){
	return this->size;
}

template <class NodeEntry>
void Stack<NodeEntry>::ClearStack(){

	Node<NodeEntry> *pn = this->top;
	for(int i =0;i<this->size;++i){
		this->top = this->top->next;
		delete pn;
		pn = this->top;
		cout<<"obj "<<i<<" is deleted"<<endl;
	}
	this->size=0;
}

template <class NodeEntry>
void Stack<NodeEntry>::TraverseStack(void(*pf)(NodeEntry)){
	Node <NodeEntry> *pn = this->top;
	for(int i =0;i<this->size;++i){
		(*pf)(pn->entry);
		pn = pn->next;
	}
}
