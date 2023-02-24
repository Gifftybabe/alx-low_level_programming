## What is a Makefile?
Make is Unix utility that is designed to start execution of a makefile. A makefile is a special file, containing shell commands, that you create and name makefile (or Makefile depending upon the system). 

The makefile contains a list of rules. These rules tell the system what commands you want to be executed. Most times, these rules are commands to compile(or recompile) a series of files. The rules, which must begin in column 1, are in two parts. The first line is called a dependency line and the subsequent line(s) are called actions or commands. The action line(s) must be indented with a tab.


## Why do Makefiles exist?
Makefiles are used to help decide which parts of a large program need to be recompiled. In the vast majority of cases, C or C++ files are compiled. Other languages typically have their own tools that serve a similar purpose as Make. Make can also be used beyond compilation too, when you need a series of instructions to run depending on what files have changed. This tutorial will focus on the C/C++ compilation use case.

Here's an example dependency graph that you might build with Make. If any file's dependencies changes, then the file will get recompiled:

![image](https://user-images.githubusercontent.com/105078661/221159501-0d913895-72f3-4631-8dfa-58580b7c4502.png)

# Running the Examples
To run these examples, you'll need a terminal and "make" installed. For each example, put the contents in a file called Makefile, and in that directory run the command make. Let's start with the simplest of Makefiles:

hello:
	echo "Hello, World"
Note: Makefiles must be indented using TABs and not spaces or make will fail.

Here is the output of running the above example:

$ make
echo "Hello, World"
Hello, World

![image](https://user-images.githubusercontent.com/105078661/221160868-4cac844e-fafc-4ac6-8c02-69b034c86582.png)
