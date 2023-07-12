//This is a sample program that shows tha operations of a dynamic que
#include<iostream>
#include"DyQue.h"
using namespace std;

int main() {
	//Instantiate DyQue class
	DyQue one;

	//Add values to que one
	cout << "Adding six values to que...\n";
	one.enque(1);
	one.enque(2);
	one.enque(3);
	one.enque(4);
	one.enque(5);
	one.enque(6);
	
	//Remove 7 values to test validation
	cout << "Removing seven values....\n";
	for (int i = 0; i < 7; i++) {
		try {
			cout<< one.deque()<<endl;
		}
		catch (exception) {

		}
	}
	



	return 0;
}