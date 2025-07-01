#pragma once
/* Write a C++ program to implement a stack of integers using a vector with
   push and pop operations.
  Perform the following operations:
	x 1) Create a stack object.
	x 2) Check the stack is empty or not.
	x 3) Insert some integer values onto the stack.
	x 4) Remove an element from the stack.
	x 5) Find the Top of the stack.
	x 6) Find average value of the stack elements. */
#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <vector> // Include the vector library


using namespace std;

class vector_based_stack { // https://www.youtube.com/watch?v=73JNdV3UiYg&ab_channel=KenUrban
private:
	vector<int>vec;

public:
	vector_based_stack() {}

	size_t Size() { return vec.size(); }

	bool empty() { return vec.empty(); } // 2) Check the stack is empty or not.

	void push(int value) { vec.push_back(value); } // 3) Insert some integer values onto the stack
	int top() { return vec.back(); } // 5) Find the Top of the stack.
	void pop() { vec.pop_back(); } // 4) Remove an element from the stack.


	int findavg(int total, int avg) {
		
		for (size_t i = 0; i < vec.size(); i++) {
			cout << vec[i] << " ";
			total = total + vec[i];
		}
		avg = (total / static_cast<int>(vec.size()));
		return avg; // 6) Find average value of the stack elements.
	}
};
#include "Stack.h"

#endif