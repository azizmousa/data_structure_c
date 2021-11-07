/*
 * list.h
 *
 *  Created on: Dec 1, 2016
 *      Author: A
 */

#ifndef LIST_H_
#define LIST_H_
#include <fstream>
using namespace std;
const int MAXSIZE = 5;
class List{
private:
	int arr[MAXSIZE];
	int size;
public:
	List();
	List(const List & origList);
	bool isEmpty()const;
	bool isFull()const;
	void insert(int elemnt, int pos);
	int remove(int pos);
	int listSize()const;
	void clearList();
	void Display()const;
	friend ostream & operator<<(ostream &out, List &li);

};



#endif /* LIST_H_ */
