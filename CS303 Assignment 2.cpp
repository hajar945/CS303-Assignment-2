// CS303 Assignment 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector> 
#include "LinkedList.h"
#include "LinkedList_Functions.h"

#include "Stack.h"
using namespace std;


int main() {

    // Creating a LinkedList object
    LinkedList<char> list;
    
    // Inserting nodes
    list.push_front('D');
    list.push_front('C');
    list.push_front('B');
    list.push_front('A');

    cout << "Elements of the list are: ";

    // Print the list
    list.print();
    cout << endl << endl;
    list.push_back('E');
    cout << "After a push_back: ";

    // Print the list
    list.print();
    cout << endl << endl;
    list.push_front('Z');

    cout << "After a push_front: ";

    // Print the list
    list.print();
    cout << endl << endl;
    list.pop_front();
    cout << "After a pop_front: ";

    // Print the list
    list.print();
    cout << endl << endl;

    list.pop_back();
    cout << "After a pop_back: ";

    // Print the list
    list.print();
    cout << endl << endl;


    cout << "The head node is: " << list.headNode() << endl;
    cout << "The tail node is: " << list.tailNode() << endl;

	cout << "Is the list empty?  " << (list.isEmpty() ? "Yes" : "No") << endl;


    cout << "Number of items: " << list.get_numItems() << endl;

    list.insert('G', 2);

    cout << endl << endl;
    // Print the list
    list.print();
  

    list.remove(2);
    // Print the list
    list.print();


    list.FindFirst('B'); // Find the first occurence of 'B'
    list.print();



	cout << "\n\n ------ STACK IMPLEMENTATION ---\n\n";
	
    vector_based_stack mystack; // x 1) Create a stack object.

	cout << "Is the stack empty? " << (mystack.empty() ? "Yes" : "No") << endl; // x 2) Check the stack is empty or not.

	mystack.push(30); // x 3) Insert some integer values onto the stack.
    mystack.push(40);
    mystack.push(60);
    mystack.push(70);
    mystack.push(90);

	cout << "Top element of the stack: " << mystack.top() << endl; // x 5) Find the Top of the stack.

	mystack.pop(); // x 4) Remove an element from the stack.

	cout << "After popping the top element, the new top is: " << mystack.top() << endl;

    int total = 0; // Declare and initialize 'total'  
    int avg = 0;   // Declare and initialize 'avg'  

    cout << "Average is : " << mystack.findavg(total, avg);
    return 0;
}