varargs functions or variadic functions are syntax for declaring a function to take a variable number or type of arguments.
###
However, the language itself provides no mechanism for such functions to access their non-required arguments; instead, you use the variable arguments macros defined in stdarg.h.
###
stdarg.h is a header in the C standard library of the C programming language that allows functions to accept an indefinite number of arguments. It provides facilities for stepping through a list of function arguments of unknown number and type. C++ provides this functionality in the header cstdarg.
The contents of stdarg.h are typically used in variadic functions

This is a README file that introduces us to C - Variadic functions with general objectives as follows:
****
What are variadic functions
How to use va_start, va_arg and va_end macros
Why and how to use the const type qualifier
