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
    T tailNode();

    // Function to check if list is empty
    bool isEmpty();

    // Function to print the linked list.
    void print();
};