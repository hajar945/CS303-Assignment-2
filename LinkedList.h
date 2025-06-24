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
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(T data) {
        this->data = data;
        this->next = NULL;
    }
};

// Linked list class to implement a singly linked list
template <typename T> class Linkedlist {
    Node<T>* head; //Pass the template parameter of the enclosing class to the Node template
    Node<T>* tail; //Pass the template parameter of the enclosing class to the Node template

public:
    // Default constructor
    Linkedlist() {
        head = NULL;
        tail = NULL;
    }

    // Function to insert a node at the start of the
    // linked list
    void push_front(T data) {

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
    void push_back(T data) { //https://www.youtube.com/watch?v=AIAhIu0lqnw&ab_channel=RitaKattsyna

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
    void pop_front() { // https://www.geeksforgeeks.org/cpp-program-for-deleting-a-node-in-a-linked-list/


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
    T headNode() {
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