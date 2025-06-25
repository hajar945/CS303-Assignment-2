/* Write a C++ program to implement a stack of integers using a vector with
   push and pop operations.
  Perform the following operations:
	1) Create a stack object.
	2) Check the stack is empty or not.
	3) Insert some integer values onto the stack.
	4) Remove an element from the stack.
	5) Find the Top of the stack.
	6) Find average value of the stack elements. */
#include <iostream>
#include <vector> // Include the vector library
using namespace std;

// template<typename T> // https://www.youtube.com/watch?v=eShL450T8UE&ab_channel=ProfessorKevinWortman
class vector_based_stack { // https://www.youtube.com/watch?v=73JNdV3UiYg&ab_channel=KenUrban
private:
	vector<int>vec;

public:
	vector_based_stack() {}

	size_t Size() { return vec.size(); }
	
	bool empty() {return vec.empty();}

	void push(int value) { vec.push_back(value);}
	int top() { return vec.back(); }
	void pop() { vec.pop_back(); }

};
int main() {
	// 1) Create a stack object
	//    Creating a stack object called 'vecstack'
	vector_based_stack vecstack;

	//2) Check the stack is empty or not
	cout << "Is the stack empty? " << (vecstack.empty() ? "Yes" : "No") << endl;
  }