# Custom String Tokenizer in C

A custom implementation of the C `strtok` function without using the standard `strtok` function.

## Overview

This project demonstrates how string tokenization can be implemented manually in C. The program separates a string into individual tokens based on a set of delimiter characters.

The tokenizer keeps track of its current position using a static pointer and modifies the input string by replacing delimiters with null terminators.

## Concepts Demonstrated

- C pointers
- Character arrays
- Strings
- Functions
- Loops
- Static variables
- String manipulation
- Delimiter detection
- Null terminators

## How It Works

The `mystrtok` function processes the string in several steps:

1. Sets the starting position when the function receives a new string.
2. Skips any leading delimiter characters.
3. Finds the beginning of the next token.
4. Searches for the next delimiter.
5. Replaces the delimiter with a null terminator.
6. Returns the token.
7. Uses a static pointer to continue from the correct position on the next call.

After the first call, the function receives `NULL` and continues processing the same string from where it previously stopped.

## Example

The program processes the following string:

Learning C is fun, powerful, and useful!

Using spaces, commas, and exclamation marks as delimiters, the output is:

Learning
C
is
fun
powerful
and
useful

## Compilation

Compile the program using GCC:

gcc main.c -o tokenizer

## Running the Program

On Linux or macOS:

./tokenizer

On Windows:

tokenizer.exe

## Technologies

- C
- GCC
