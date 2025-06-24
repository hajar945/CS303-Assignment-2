#pragma once

#include <iostream>
using namespace std;

// Node class to represent a node of the linked list.
template <typename T>
class Node {
public:
    T data;
    Node* next;
    // Default constructor
    Node();
    // Parameterised Constructor
    Node(T data);
};

// Linked list class to implement a singly linked list
template <typename T> class Linkedlist {
    Node<T>* head; //Pass the template parameter of the enclosing class to the Node template
    Node<T>* tail; //Pass the template parameter of the enclosing class to the Node template

public:
    // Default constructor
    Linkedlist();

    // Function to insert a node at the start of the
    // linked list
    void push_front(T data);

    // Function to insert a node at the end of the
    // linked list
    void push_back(T data);

    // Function to remove a node at the start of the
       // linked list
    void pop_front(); 
    // Function to remove a node at the end of the
    // linked list
    void pop_back();

    // Function to return the head node
    T headNode();

    // Function to return the tail node
    T tailNode() {
        // Check if the list is empty
        if (head == nullptr) {
            cout << "List is empty, nothing to delete." << endl;
            return 0;
        }

        // Check if it contains only one element
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            return 0;
        }

        // Traverse to the tail node
        Node<T>* temp = head;

        while (temp->next->next != nullptr) {
            temp = temp->next;
        }
        return temp->next->data;

    }

    // Function to check if list is empty
    bool isEmpty() {
        // Check if the list is empty
        if (head == nullptr) {
            cout << "List is empty, nothing to delete." << endl;
            return true;
        } cout << "List is not empty." << endl;

        // Check if it contains only one element
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
            cout << "List contains only one element." << endl;
            return 0;
        } cout << "List contains more than one element." << endl;
        return false;
    }

    // Function to print the linked list.
    void print() {
        Node<T>* temp = head;

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