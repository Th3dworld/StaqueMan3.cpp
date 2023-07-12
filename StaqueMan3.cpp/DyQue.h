//This is the specification for DyQue a dynamic que class
#ifndef DYQUE_H
#define DYQUE_H

class DyQue {
	//Declare private members
	private:
		struct Node {
			int value;
			Node* next;
		};
		Node* front;
		Node* rear;

	//Declare public members
	public:
		DyQue() {
			front = nullptr;
			rear = nullptr;
		}
		
		//Accessor and mutator functions
		void enque(int);
		int deque();
};

#endif // !DYQUE_H
