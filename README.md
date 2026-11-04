*This project has been created as part of the 42 curriculum by irebah .*

# Libft

## Description

**Libft** is a project from the 42 curriculum that consists of creating a personal C library by reimplementing a set of standard C library functions and developing additional utility functions.

The main goal is to understand how these functions work internally instead of relying entirely on existing implementations. This project provides a solid foundation in C programming, memory management, pointers, strings, and data structures.

The library is compiled into a static archive named `libft.a`, which can be linked to other C programs and reused in future projects.

## Library Overview

The library contains several categories of functions.

### 1. Character Checks and Conversions

These functions classify characters and convert between uppercase and lowercase letters.

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is an alphabetic letter. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a value belongs to the ASCII range. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

### 2. Memory Management

These functions operate directly on memory blocks.

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory block with a specified byte. |
| `ft_bzero` | Sets a memory block to zero. |
| `ft_memcpy` | Copies bytes between memory regions that do not overlap. |
| `ft_memmove` | Copies bytes safely when memory regions overlap. |
| `ft_memchr` | Searches for a byte in a memory block. |
| `ft_memcmp` | Compares two memory blocks. |
| `ft_calloc` | Allocates memory and initializes it to zero. |

### 3. String Manipulation

These functions measure, search, compare, copy, and manipulate strings.

| Function | Description |
|---|---|
| `ft_strlen` | Calculates the length of a string. |
| `ft_strchr` | Finds the first occurrence of a character. |
| `ft_strrchr` | Finds the last occurrence of a character. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_strlcpy` | Copies a string into a size-limited destination buffer. |
| `ft_strlcat` | Appends a string within a specified destination size. |
| `ft_strnstr` | Searches for a substring within a limited range. |
| `ft_strdup` | Creates a dynamically allocated duplicate of a string. |
| `ft_substr` | Extracts a substring. |
| `ft_strjoin` | Concatenates two strings into a newly allocated string. |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_strmapi` | Creates a new string by applying a function to each character. |
| `ft_striteri` | Applies a function to each character of a string by index. |

### 4. Number Conversion

| Function | Description |
|---|---|
| `ft_atoi` | Converts a string representation of an integer into an `int`. |
| `ft_itoa` | Converts an integer into a newly allocated string. |

### 5. File Descriptor Output

These functions write characters, strings, or numbers to a specified file descriptor.

| Function | Description |
|---|---|
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### 6. Linked Lists

The bonus part covers singly linked lists and operations on their nodes.

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node. |
| `ft_lstadd_front` | Adds a node at the beginning of a list. |
| `ft_lstsize` | Counts the nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstadd_back` | Adds a node at the end of a list. |
| `ft_lstdelone` | Deletes one node using a supplied content-deletion function. |
| `ft_lstclear` | Deletes an entire list and frees its nodes. |
| `ft_lstiter` | Applies a function to each node's content. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

*The list above describes the expected function set. The final list must match the functions actually implemented and submitted.*

## Instructions

### Requirements

- A C compiler, such as `cc`.
- GNU Make.
- The project's source files and `libft.h`.

### Compilation

From the root directory of the repository, run:

```bash
make
```

This compiles the source files and creates the static library:

```text
libft.a
```

The Makefile uses the following compiler flags:

```bash
-Wall -Wextra -Werror
```

### Makefile Commands

| Command | Description |
|---|---|
| `make` | Compiles the library. |
| `make clean` | Removes object files. |
| `make fclean` | Removes object files and `libft.a`. |
| `make re` | Performs a clean rebuild. |

### Using the Library

Include the library header in your C source file:

```c
#include "libft.h"
```

Example:

```c
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str;

    str = ft_strdup("Hello, Libft!");
    if (!str)
        return (1);
    printf("%s\n", str);
    free(str);
    return (0);
}
```

Compile the example from the project directory:

```bash
cc -Wall -Wextra -Werror main.c -L. -lft -o program
```

Run the program:

```bash
./program
```

## Resources

The following resources are useful for understanding C, standard library behavior, memory management, and static libraries.

- [C reference — cppreference](https://en.cppreference.com/w/c)
  
  Reference documentation for C language features and standard library functions.

- [GNU Compiler Collection (GCC) documentation](https://gcc.gnu.org/onlinedocs/)
  
  Documentation about compiling and building C programs.

- [GNU Make manual](https://www.gnu.org/software/make/manual/)
  
  Reference for Makefiles, build rules, dependencies, and compilation automation.

- [Linux manual pages](https://man7.org/linux/man-pages/)
  
  Documentation for standard functions and system interfaces such as `write`, `malloc`, and `free`.

### AI Usage

AI tools were used as supplementary learning and development aids during the project.

Their assistance included:

- Explaining C concepts such as pointers, memory allocation, string manipulation, and linked lists.
- Helping analyze function behavior and reason about edge cases.
- Supporting debugging and reviewing code logic.
- Helping organize and document the library in this README.

The implementation, testing, and understanding of each function should be verified by the project author. AI-generated suggestions must be reviewed and validated against the official project requirements.

## Learning Outcomes

Through Libft, this project develops practical experience with:

- Low-level memory operations and pointer arithmetic.
- Dynamic memory allocation and memory cleanup.
- String handling and boundary conditions.
- Function pointers and callbacks.
- Singly linked lists and data structure management.
- Static library creation and Makefile automation.

The project serves as a reusable foundation for future C programming projects in the 42 curriculum.
