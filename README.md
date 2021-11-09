# -Data-Structures_Assignment-02
Suppose you are designing a compiler for a limited programming language namely Recursive Language (RL) that is close to C++ and the details of 
language are provided later in the assignment. Your task is to compile and simulate the behavior of OS for executing a program consisting of recursion. 
Basic working of the Intelligent Compiler is as follows:
1. Reading a text file “code.txt” consisting of a program written in Recursive Language.
2. Compiling the code to understand the actions. 
3. Exhibiting the behavior of code by updating the stack segment of a program. 
4. Generating necessary output after each step and compiling the final outcome.
5. Reporting the results in “result.txt” file.
#language Model
Suppose you are designing a compiler for a limited programming language namely Recursive
Language (RL) that is close to C++ and the details of language are provided later in the assignment.
Your task is to compile and simulate the behavior of OS for executing a program consisting of
recursion. Basic working of the Intelligent Compiler is as follows:
1. Reading a text file “code.txt” consisting of a program written in Recursive Language.
2. Compiling the code to understand the actions.
3. Exhibiting the behavior of code by updating the stack segment of a program.
4. Generating necessary output after each step and compiling the final outcome.
5. Reporting the results in “result.txt” file.
#Runtime Stack:
The run time stack is basically the way your programs store and handle your local non-static
variables. Think of the run time stack as a stack of plates. With each function call, a new "plate" is
placed onto the stack. The local variables and parameters are placed onto this plate. Variables from
the calling function are no longer accessible (because they are on the plate below, if stack grows
upward). When a function terminates, the local variables and parameters are removed from the
stack. Control is then given back to the calling function.
