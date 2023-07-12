//This is the implementation file for the Dynamic Que class
#include<iostream>
#include"DyQue.h"
#include<exception>
using namespace std;

void DyQue::enque(int newval) {
	//Create new node to store value
	Node* newnode;
	

	//initialized new node
	newnode = new Node;
	newnode->value = newval;
	newnode->next = nullptr;

	//Check if que is empty and initialize both
	if (!rear && !front) {
		front = newnode;
		rear = newnode;
	}
		
	else {
		//Send new node to end
		rear->next = newnode;
		rear = newnode;
	}
}

int DyQue::deque() {
	//Create temp structures
	int temp;
	Node* tempr;

	//Check if que is empty
	if (!front && !rear) {
		cout << "The que is empty.\n";
		throw std::exception("q is empty");
	}
	else if(front == rear){
		temp = front->value;
		tempr = front;
		front = nullptr;
		rear = nullptr;
		delete tempr;
	}
	else {
		temp = front->value;
		tempr = front;
		front = front->next;
		delete tempr;
	}

	return temp;

	
}