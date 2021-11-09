#pragma once
#include <string>
#include <fstream>
#include <iostream>
using namespace std;


template<typename T>
struct QueueNode{
	T value;
	QueueNode* next;

}

//stack for evaluation of postfix expression
// Add the required functions 
struct Stack {
	int * array;

};

struct Queue {//use linked list base implementation 
	
};

template <typename T>
struct Variables{ //A linked list of Variables can be use for finding the variable and associated value 
	T value;
	string Name;

};


template<typename T>
struct ListNode{
	T value;
	ListNode* next;

}
template<typename T>
class LinkedList {
	
};


// Stack used for converting infix expressions to postfix expressions 
class SpecialStack {
	public:
		Queue queue1;
		Queue queue2;
};

// Simply just read the file
// Use '\n' to sperate each line of code
string readFile(string a="code.txt") {
	
}

// Remove useless lines so line addressing is done properly
string removeLines(string code) {
	
}

// Use this for checking indentations (function, loops, if conditions, etc.)
//Only check for the brackets in this function 
string checkIndentationErrors(string code) {

}

// Check if the function calls itself infinitely
string checkInfiniteLoop(string code) {

}

// This prepends a line address to every single line in program
string prependLineAddress(string code) {
	
}

// This function create the run time stack of the program file provided 
// Step 1:  Push the passing arguments of the function  into the stack 
// Step 2:  Push the line address of the code line that is calling the function 
// Step 3:  Push EBP to the stack (for first step conside EBP =1004 AS default value )
// Step 4:  Assign the current ESP value to EBP  
// Remember Stack Pointer(ESP) always points at the Top of the Stack and is decreased by 4 bytes whenever a value is inserted into the stack 
//  (  REPEAT THE ABOVE STEPS 1 TO 4 FOR ALL THE RECURSIVE CALLS  )
// write the output to the outputFile if the string is  not empty
void CreateRunTimeStack(string filename,string outputFile){

}

// Start execution from the main function and use outputFile to print the output
// Must use CreateRunTimeStack() for execution of the code 
// write the output to the outputFile if the string is not empty
void ExecuteCode(string filename,string outputFile){

}

// use special stack for converting expressions  
string infixToPostfix(string expression) {

}

// Use Array based stack for evaluating the expression  
// Values contains the values of the variables used in the postfix expression  for  getting the final result
// You may look at the Test Case for understanding the working of the function   
template<typename T>
T Solving_PostfixExpression(string expression, LinkedList<T> values){
	T value;
	return value;
}

/*

// Code should be templatized
//use this node for creating a Run Time Stack
class RuntimeNode
	{
		int/datatype data;
		RuntimeNode *nodeAddress; //same will be stored in ESP and EBP
								 //You may modify the above line
		RuntimeNode *next;
	};

*/