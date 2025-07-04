#pragma once
#ifndef LINKEDLIST_FUNCTIONS_H
#define LINKEDLIST_FUNCTIONS_H


#include "LinkedList.h"
#include <iostream>
using namespace std;


//https://www.geeksforgeeks.org/program-to-implement-singly-linked-list-in-c-using-class/

 // Default constructor
template <typename T>
Node <T>::Node() {
    data = 0;
    next = NULL;
}

// Parameterised Constructor
template <typename T>
Node<T>::Node(T data) {
    this->data = data;
    this->next = NULL;
}




// Default constructor
template <typename T>
LinkedList<T>::LinkedList() {
    head = NULL;
    tail = NULL;
}

template <typename T>
Node<T>* LinkedList<T>::getHead() const { return head; }

template <typename T>
Node<T>* LinkedList<T>::getTail() const { return tail; }

template <typename T>
int LinkedList<T>::get_numItems() const { //https://www.geeksforgeeks.org/dsa/find-length-of-a-linked-list-iterative-and-recursive/

    // Initialize num_items with 0
    int num_items = 0;

    // Initialize curr with head of Linked List
    Node<T>* curr = head;

    // Traverse till we reach nullptr
    while (curr != nullptr) {

        // Increment count by 1
        num_items++;

        // Move pointer to next node
        curr = curr->next;
    }

    // Return the count of nodes
    return num_items;
}


// Function to insert a node at the start of the
// linked list
template <typename T>
void LinkedList<T>::push_front(T data) {

    // Create the new Node
    Node<T>* newNode = new Node<T>(data);

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
template <typename T>
void LinkedList<T>::push_back(T data) { //https://www.youtube.com/watch?v=AIAhIu0lqnw&ab_channel=RitaKattsyna

    // Create the new Node
    Node<T>* newNode = new Node<T>(data);

    // Assign to head of the list is empty
    if (head == NULL) {
        head = newNode;
        return;
    }
    else {
        Node<T>* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}
// Function to remove a node at the start of the
   // linked list
template <typename T>
void LinkedList<T>::pop_front() { // https://www.geeksforgeeks.org/cpp-program-for-deleting-a-node-in-a-linked-list/


    if (head == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    // Store current head in a temporary variable
    Node<T>* temp = head;

    // Move head to the next node
    head = head->next;

    // Delete the old head node
    delete temp;
    cout << "Head node deleted successfully." << endl;

}


// Function to remove a node at the end of the
// linked list
template <typename T>
void LinkedList<T>::pop_back() { // https://www.geeksforgeeks.org/cpp-program-for-deleting-a-node-in-a-linked-list/


    // Check if the list is empty
    if (head == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return;
    }

    // Check if it contains only one element
    if (head->next == nullptr) {
       // delete head;
        head = nullptr;
        return;
    }

    // Traverse to the tail node
    Node<T>* temp = head;
    while (temp->next->next != nullptr) {
        temp = temp->next;
    }

    // delete the tail node
    delete temp->next;
    temp->next = nullptr;
    cout << "tail node deleted successfully." << endl;

}

// Function to return the head node
template <typename T>
T LinkedList<T>::headNode() {
    Node<T>* temp = head;

    // Check for empty list
    if (head == NULL) {
        cout << "List empty" << endl;
        return 0;
    }

    // Traverse the list
    if (temp != NULL) {
        return temp->data;
    }
}

// Function to return the tail node
template <typename T>
T LinkedList<T>::tailNode() {
    // Check if the list is empty
    if (head == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return 0;
    }

    // Check if it contains only one element
    if (head->next == nullptr) {
      //  delete head;
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
template <typename T>
bool LinkedList<T>::isEmpty() {
    // Check if the list is empty
    if (head == nullptr) {
        cout << "List is empty, nothing to delete." << endl;
        return true;
    } cout << "List is not empty." << endl;

    // Check if it contains only one element
    if (head->next == nullptr) {
       // delete head;
        head = nullptr;
        cout << "List contains only one element." << endl;
        return 0;
    } cout << "List contains more than one element." << endl;
    return false;
}

//Insert item at position index
//(starting at 0).Insert at the end 
// if index is beyond the end of the list
template <typename T>
void LinkedList<T>::insert(const T& data, size_t index) { // https://takeuforward.org/data-structure/insert-at-given-position-in-linked-list/

    // Check if list is empty
    if (head == nullptr) {
        cout << "\nList is empty." << endl;
        return;
    }

	cout << "\nThe data to insert is: " << data << endl;
	cout << " \tat the index: " << index << endl;

    // Create the new Node
    Node<T>* newNode = new Node<T>(data);

    if (index < get_numItems()) { 
        if (index == 0) {                 
            newNode->next = head;
            head = newNode;
        }
        else {
            Node<T>* curr = head;
            while (--index)
                curr = curr->next;
            newNode->next = curr->next;
            curr->next = newNode;
        }
    }
    else {
        cout << "Invalid Positon. Data will be pushed back" << endl;
        push_back(data);
    }
}

//Remove the item at position index. Return true if successful;
//   return false if index is beyond the end of the list.
template <typename T>
bool LinkedList<T>::remove(size_t index) { // https://www.geeksforgeeks.org/cpp-program-for-deleting-a-node-in-a-linked-list/#3-delete-a-node-at-a-specific-position
    cout << "Please enter an index to remove: ";
    cin >> index;
    // Check if index is valid
    if (index < 0 || index >= get_numItems()) {
        cout << "Invalid index. No items removed" << endl;
        return false;
    }
                                                   
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return false;
    }

    // Deleting head node
    if (index == 0) {
        Node<T>* temp = head;
        head = head->next;
        delete temp;
        return true;
    }

    // Traverse to the node before the target position
    Node<T>* current = head;
    for (int i = 0; i < index - 1 && current != nullptr; i++) {
        current = current->next;
    }

     // If position is greater than the number of nodes
    if (current == nullptr || current->next == nullptr) {
        cout << "Position exceeds list length." << endl;
        return false;
    }

    // Delete the node at the target position
    Node<T>* temp = current->next;
    current->next = temp->next;
    delete temp;
    return true;

}

template <typename T>
size_t LinkedList<T>::FindFirst(const T& item) { 
	size_t index = 0; // Initialize index to 0
    Node<T>* current = head;

    // Check for empty list
    if (head == NULL) {
        cout << "\nList is empty" << endl;
        return -1;
	}

    while (current != nullptr) {
        if (current->data == item) {
			cout << "Target " << item << " found at index : " << index << endl;
			return index; // Return the index of the first occurrence if found
        }
        current = current->next;
        index++;
	}
	cout << "Target " << item << " not found in the list" << endl;
	return get_numItems(); // Return the size of the list if item is not found
 }


// Function to print the linked list.
template <typename T>
void LinkedList<T>::print() {
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
    cout << "\nThere are " << get_numItems() << " items in the list\n";

}





#endif