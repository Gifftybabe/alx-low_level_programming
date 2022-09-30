An introductory README file on argc, argv
##
_____How to use arguments passed to your program
What are two prototypes of main that you know of, and in which case do you use one or the other
How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters
------
##
argc is greater than zero.
argv[argc] is a null pointer.
argv[0] through to argv[argc-1] are pointers to strings whose meaning will be determined by the program.
argv[0] will be a string containing the program's name or a null string if that is not available
