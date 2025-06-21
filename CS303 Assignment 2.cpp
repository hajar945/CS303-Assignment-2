// CS303 Assignment 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// C++ program to implement singly linked list using a class
//https://www.geeksforgeeks.org/program-to-implement-singly-linked-list-in-c-using-class/
#include <iostream>
using namespace std;

// Node class to represent a node of the linked list.
class Node {
public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

// Linked list class to implement a singly linked list
class Linkedlist {
    Node* head;
    Node* tail;

public:
    // Default constructor
    Linkedlist() {
        head = NULL;
        tail = NULL;
    }

    // Function to insert a node at the start of the
    // linked list
    void push_front(int data) {

        // Create the new Node
        Node* newNode = new Node(data);

        // Assign to head of the list is empty
        if (head == NULL) {
            head = newNode;
            return;
        }

        // Insert the newly created linked list at the head
        newNode->next = this->head;
        this->head = newNode;
    }

    // Function to insert a node at the end of the
    // linked list
    void push_back(int data) { //https://www.youtube.com/watch?v=AIAhIu0lqnw&ab_channel=RitaKattsyna

        // Create the new Node
        Node* newNode = new Node(data);

        // Assign to head of the list is empty
        if (head == NULL) {
            head = newNode;
            return;
        }
        else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    // Function to remove a node at the start of the
       // linked list
    void pop_front() { // https://www.geeksforgeeks.org/cpp-program-for-deleting-a-node-in-a-linked-list/


        if (head == nullptr) {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }

        // Store current head in a temporary variable
        Node* temp = head;

        // Move head to the next node
        head = head->next;

        // Delete the old head node
        delete temp;
        cout << "Head node deleted successfully." << endl;

    }


    // Function to remove a node at the end of the
    // linked list
    void pop_back() { // https://www.geeksforgeeks.org/cpp-program-for-deleting-a-node-in-a-linked-list/


        // Check if the list is empty
        if (head == nullptr) {
            cout << "List is empty, nothing to delete." << endl;
            return;
        }

        // Check if it contains only one element
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return;
        }

        // Traverse to the tail node
        Node* temp = head;
        while (temp->next->next != nullptr) {
            temp = temp->next;
        }

        // delete the tail node
        delete temp->next;
        temp->next = nullptr;
        cout << "tail node deleted successfully." << endl;

    }
    // Function to print the linked list.
    void print() {
        Node* temp = head;

        // Check for empty list
        if (head == NULL) {
            cout << "List empty" << endl;
            return;
        }

        // Traverse the list
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

};

int main() {

    // Creating a LinkedList object
    Linkedlist list;

    // Inserting nodes
    list.push_front(4);
    list.push_front(3);
    list.push_front(2);
    list.push_front(1);

    cout << "Elements of the list are: ";

    // Print the list
    list.print();
    cout << endl << endl;
    list.push_back(5);
    cout << "After a push_back: ";

    // Print the list
    list.print();
    cout << endl << endl;
    list.push_front(0);

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
    return 0;
}