#!/bin/bash

# Compile each .c file into .o files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c *.c

# Create the static library liball.a
ar rcs liball.a *.o

# Move the library to the current directory
mv liball.a "$(pwd)"

# Clean up temporary .o files
rm *.o

# Print success message
echo "Static library liball.a created successfully."

