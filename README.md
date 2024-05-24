# makefile-test

(20.03.2021)
1. Write a program for solving the search problem (optional) in
two-dimensional array (matrix) by one of the algorithms of the linear search method.
2. Take the dimensions of the matrix m and n independently in the range from 7 to 10. Size
matrix must be specified as an argument to start the program.
3. The program must be written and structured as follows
as follows:
a) the declaration of data structures (typedef) must be made in
a separate header file;
b) there must be at least three source code files (no
including the necessary header files) that will contain
implementation of input functions (random values, pre-sorted
values, from the keyboard), processing, and printing (pretty_print)
matrix elements;
c) to perform the task of processing elements of the matrix should be
two different functions are written:
1) with additional debug output operators
information for printing (debug version);
2) with the execution of specified actions without additional output
debugging information (release version).
The user must choose the function when starting the program through
the startup argument. For example, the -d option enables debug.
1. To compile a written multi-file program, write
a separate makefile, and:
a) when one of the source files is changed, it must be recompiled
only this file (and the actions necessary to generate
binary file);
b) when deleting the binary file and unchanged source files
only linking should take place;
c) provide a separate target for cleaning generated files;
12/18
1. To be able to compile a written multi-file program in two
ways:
a) using one gcc command;
b) using a make file.
1. Test and debug the program on a computer. At
when testing the program, it is necessary to select the following input sets
initial values of the matrix so that it can be easily tracked
the correctness of the search execution and this correctness would be tested
for all possible cases. For testing purposes, it is allowed
use smaller matrices.
