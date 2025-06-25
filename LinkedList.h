#pragma once
#ifndef LINKEDLIST_H
#define LINKEDLIST_H
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
template <typename T> class LinkedList {
    Node<T>* head; //Pass the template parameter of the enclosing class to the Node template
    Node<T>* tail; //Pass the template parameter of the enclosing class to the Node template
    int num_items; // Number of items in the linked list

public:
    // Default constructor
    LinkedList();

	// Function to get the head and tail nodes
    Node<T>* getHead() const;
    Node<T>* getTail() const;


    // Function to get number of items in the list
    int get_numItems() const;

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

	// Function to insert a node at an index
    void insert(T data, int index);

    // Function to remove an item at an index
    bool remove(int index);

    // Function to print the linked list.
    void print();
};
#include "LinkedList_Functions.h"

#endif