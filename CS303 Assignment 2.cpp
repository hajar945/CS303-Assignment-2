// CS303 Assignment 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {

    // Creating a LinkedList object
    Linkedlist<char> list;

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

    return 0;
}