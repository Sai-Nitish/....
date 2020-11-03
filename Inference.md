# Inference
## Assignment 1:
- C strings and C++ strings need header files
- C strings are arrays of characters whereas C++ strings are inbuilt datatypes ie string is a datatype in the C++ standard library.
- String concatenation is done with the strcat function in C whereas concatenation is done like addition with + operator.
- String copy is done with the strcpy function in C whereas copying is done with the ‘=’ operator in C++.
- C strings act on fixed size character arrays whereas C++ strings are dynamic in nature.
- C strings are generally faster,but C++ strings are more efficient(in terms of complexity).
## Assignment 2:
### Call by Value
While calling a function, we pass values of variables to it. Such functions are known as “Call By Values”.In this method, the value of each variable in calling function is copied into corresponding dummy variables of the called function.With this method, the changes made to the dummy variables in the called function have no effect on the values of actual variables in the calling function. in call by values we cannot alter the values of actual variables through function calls.
### Call by Address
With this method, the changes made to the dummy variables in the called function have no effect on the values of actual variables in the calling function.In this method, the address of actual variables in the calling function are copied into the dummy variables of the called function.With this method, using addresses we would have an access to the actual variables and hence we would be able to manipulate them.In call by address we can alter the values of variables through function calls.
### Call by Reference
The call by reference method of passing arguments to a function copies the reference of an argument into the formal parameter. Inside the function, the reference is used to access the actual argument used in the call. This means that changes made to the parameter affect the passed argument.
## Assignment 3:
### Area
Here we have overloaded the functions. So depending on the number of arguments passed, the functions are executed.
### Sum with Default Parameters:
Whenever we are trying to add two or more numbers, we can just use default parameters, which are all zeros, to make the code work for n number of arguments.
### Sum Without Default Parameters:
Whenever we are trying to add two numbers then we can have different return types. When we overload the function, we can add any type of numbers.
## Assignment 4:
- argc and argv are variables with respect to command line arguments. argc keeps count of the parameters passed to the program and argv holds the values passed to the program.
- Along with the compilation of the program, we send the arguments or inputs to the program which in this case are 2 files, 1.txt and 2.txt
- argc is incremented to 2 and argv holds the files. The rest of the programs details the process of opening,reading and copying the two files with inputs taken from command line arguments
## Assignment 5:
A queue follows first in first out(FIFO) principle. I created a class Queue and q as an instance of it.Three functions have been defined to insert,remove and display the queue.Also a default constructor is used.
## Assignment 6:
operators +,-,* have been overloaded(redefined) to perform complex number operations. We can overload these operators for any operable types.
## Assignment 7:
Operators +,- and * are overloaded which are the friend functions of Class Matrix. We can overload these operators for any operable types.
## Assignment 8:
Differences between overloading and overriding:
- Overriding of functions occurs when one class is inherited from another class. Overloading can occur without inheritance.
- Overloaded functions must differ in function signature i.e either number of parameters or type of parameters should differ. In overriding, function signatures must be same.
- Overridden functions are in different scopes; whereas overloaded functions are in same scope.
