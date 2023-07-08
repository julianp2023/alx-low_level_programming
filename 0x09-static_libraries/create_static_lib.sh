#!/bin/bash

# Compile each .c file to .o object files
gcc -c *.c

# Create the static library liball.a
ar rcs liball.a *.o

# Move the library to the parent directory
mv liball.a ..

# Clean up the .o files
rm *.o

