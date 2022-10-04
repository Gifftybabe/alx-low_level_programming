A README file of the introduction to Memory allocation in C.
###
____ The malloc function is used to allocate a certain amount of memory during the execution of a program. It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.

When the amount of memory is not needed anymore, you must return it to the operating system by calling the function free.____

###
___With general objectives:
What is the difference between automatic and dynamic allocation
What is malloc and free and how to use them
Why and when use malloc
How to use valgrind to check for memory leak

