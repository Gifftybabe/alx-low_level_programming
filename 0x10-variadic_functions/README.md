varargs functions or variadic functions are syntax for declaring a function to take a variable number or type of arguments.

However, the language itself provides no mechanism for such functions to access their non-required arguments; instead, you use the variable arguments macros defined in stdarg.h.
###
stdarg.h is a header in the C standard library of the C programming language that allows functions to accept an indefinite number of arguments.
 It provides facilities for stepping through a list of function arguments of unknown number and type. 
 C++ provides this functionality in the header cstdarg.

The contents of stdarg.h are typically used in variadic functions

###
Variadic functions are functions which may take a variable number of arguments and are declared with an ellipsis in place of the last parameter. An example of such a function is printf. A typical declaration is

int check(int a, double b, ...);

##
This is a README file that introduces us to C - Variadic functions with general objectives:
***
What are variadic functions
How to use va_start, va_arg and va_end macros
Why and how to use the const type qualifier
