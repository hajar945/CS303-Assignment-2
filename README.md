The program allows the user to perform the following functions with a linked list of any one data type without the use of the LIST C++ STL: push_front, push_back, pop_front, pop_back, checking if the list is empty, inserting an element at any valid position, removing an item at position index, and finding the position of the first occurrence of an item. 
 
The second part of the program allows the user to create a stack of integer values, insert integer values onto the stack, check if the stack is empty, remove an element, return the top of the stack, and return the average value of stack elements.


The user must create a linked list object and declare the desired data type. Below, the data type is 'char'. Use the function 'push_front' to load elements of the same selected data type into the linked list.

![image](https://github.com/user-attachments/assets/eaccd9a3-d7f7-459c-b09b-657c02d0cfe7)


When the user inputs an element they'd like to push_front/back in the push_front/back parameters, the print() function lets them view the list after or before these changes, as shown below.

![image](https://github.com/user-attachments/assets/2db6c036-e30f-4b63-bce2-6b83073c247f)

No parameter data is needed for pop_front/back functions. The result of the functions is shown below.

![image](https://github.com/user-attachments/assets/bda89d5f-0673-461f-8404-bea293465286)

Using headNode() and tailNode() will return the current head node and tail node of the list. After the changes made above, the current head and tail node are as shown.

![image](https://github.com/user-attachments/assets/db5e0ab8-b282-4d5a-907e-33f574aeae09)

Using the isEmpty() function will return whether the list is empty or not. By implemenating either an if-else statment or, as done below, a ternary operator, the user can output a message as to whether or not the list is empty.
"Yes" will display when the list is empty (condition is true) and "No" will display with the list is not empty (condition is false). 

![image](https://github.com/user-attachments/assets/c6c15d53-9167-4099-b46a-f68c1c20f00d)

Below, isEmpty is executed while the list contains some values.

![image](https://github.com/user-attachments/assets/bcef4698-5bed-487d-af2a-590620424507)

The insert function requires two parameters, the first being the data to insert and the second being the position index to insert it into. Below I have decided to insert the char 'B' and position index 2.

![image](https://github.com/user-attachments/assets/c1a1650d-9194-4da3-b4c5-29c6c5b22303)

Using the print() function again, the user can view this change.

![image](https://github.com/user-attachments/assets/8840b7e8-4bc3-4e59-95db-5fdb6a0b919d)

In the terminal, the remove function prompts the user to enter an index to remove its item. Selecting an integer value out of range will remove no items. Below, I have selected the index 23 to be removed and no items were removed as a result of this.

![image](https://github.com/user-attachments/assets/2fb2abdd-adcb-4706-bba4-125fcb9b3abb)

Selecting a valid in-range integer value will successfully remove that item at the index, as shown below.

![image](https://github.com/user-attachments/assets/a946eacb-4518-439e-a17d-0f7cd826f877)

The FindFirst function takes in one parameter, an element to search in the function and return the index it is first found. If the element is not in the list, the terminal outputs that it wasn't found.
Below, the target element is 'B'. It will return the very first index it's found, so at index 1 and not its second occurance at 2.

![image](https://github.com/user-attachments/assets/8e16770c-a763-46fc-9706-66dfbc86c66a)

![image](https://github.com/user-attachments/assets/16ddb5e1-2438-475c-9cca-e9847ad310bf)

An element that is not in the list will output in the terminal as not found, as shown below with the character 'L'.

![image](https://github.com/user-attachments/assets/d0a57b5f-ce81-4ad3-aad8-5253d6fd34ab)


------------------------------------------------------------------------------------------------------------------------------------------------


The second part of the program involves stack implementation using a vector of integers.

The user must first create a stack object, as seen below:

![image](https://github.com/user-attachments/assets/53ba80ff-366f-450c-b461-63c6dc382fe1)

Using the function empty now will display 'Yes' for the stack being empty.
After loading in integer values using the push function, the empty function will display 'No' for being empty.

![image](https://github.com/user-attachments/assets/8ba93daf-93ee-4359-8658-4132f56930d8)

![image](https://github.com/user-attachments/assets/f716bd0b-12d5-42f7-87ad-5b36cb74e477)

The top function returns the top value of the stack.

![image](https://github.com/user-attachments/assets/e0eba933-3bf0-45e8-a958-a3a83fc488ee)

the pop function will remove the top value of the stack. Below, this pop function is used once and removes the top item one time.

![image](https://github.com/user-attachments/assets/4420647a-0048-4920-9b33-81409b2e0ceb)

The stack is now printed, with the print function, as follows:

![image](https://github.com/user-attachments/assets/c8d69a72-8783-4c7c-9b45-18593dda0592)

The findavg function takes in two parameters and calculates the average of the stack's integer values. Enter 0 for both of these parameters.

![image](https://github.com/user-attachments/assets/0635b403-48ba-4fda-ae17-9c9aec9da3da)

The average is output as:

![image](https://github.com/user-attachments/assets/063be186-e266-435c-bf16-c2eb6901d53e)











