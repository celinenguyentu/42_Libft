<div align="center">
  <!-- Logo -->
  <a href="https://github.com/celinenguyentu/Libft">
  <img src="docs/libftm.png" alt="Logo" width="100" height="100">
  </a>
</div>

# Libft

This project is about coding a C library. C programming can be very tedious when one doesn’t have access to the highly useful
standard functions. This project is about understanding the way these functions work, implementing and learning to use them. It will contain a lot of general purpose functions future programs of the 42 cursus will rely upon.

Grade : 125/100 \
Subjects v.16.1 : [`FR`](docs/libft_v16.1.fr.pdf) [`EN`](docs/libft_v16.1.en.pdf) \
42 Norm v.4 : [`FR`](docs/norm_v4.fr.pdf) [`EN`](docs/norm_v4.en.pdf)

## Content

### Functions from `<ctype.h>`

- [`ft_isalpha`](ft_isalpha.c)	- checks  for  an  alphabetic  character
- [`ft_isdigit`](ft_isdigit.c)	- checks for a digit (0 through 9).
- [`ft_isalnum`](ft_isalnum.c)	- checks for an alphanumeric character
- [`ft_isascii`](ft_isascii.c)	- checks whether c fits into the ASCII character set
- [`ft_isprint`](ft_isprint.c)	- checks for any printable character
- [`ft_toupper`](ft_toupper.c)	- converts char to uppercase
- [`ft_tolower`](ft_tolower.c)	- converts char to lowercase

### Functions from `<string.h>`

- [`ft_memset`](ft_memset.c)	- fills memory with a constant byte
- [`ft_strlen`](ft_strlen.c)	- calculates the length of a string
- [`ft_bzero`](ft_bzero.c)	- zeroes a byte string
- [`ft_memcpy`](ft_memcpy.c)	- copies memory area
- [`ft_memmove`](ft_memmove.c)	- copies memory area without overlapping
- [`ft_strlcpy`](ft_strlcpy.c)	- copies string to a specific size
- [`ft_strlcat`](ft_strlcat.c)	- concatenates string to a specific size
- [`ft_strchr`](ft_strchr.c)	- locates character in string
- [`ft_strrchr`](ft_strrchr.c)	- locates character in string
- [`ft_strncmp`](ft_strncmp.c)	- compares two strings
- [`ft_memchr`](ft_memchr.c)	- scans memory for a character
- [`ft_memcmp`](ft_memcmp.c)	- compares memory areas
- [`ft_strnstr`](ft_strnstr.c)	- locates a substring in a string
- [`ft_strdup`](ft_strdup.c)	- creates a duplicate for the string passed as parameter

### Functions from `<stdlib.h>`
- [`ft_atoi`](ft_atoi.c)	- converts a string to an integer
- [`ft_calloc`](ft_calloc.c)	- allocates memory and sets its bytes' values to 0

### Non-standard functions
- [`ft_substr`](ft_substr.c)	- returns a substring from a string
- [`ft_strjoin`](ft_strjoin.c)	- concatenates two strings
- [`ft_strtrim`](ft_strtrim.c)	- trims the beginning and end of string with specific set of chars
- [`ft_split`](ft_split.c)	- splits a string using a char as parameter
- [`ft_itoa`](ft_itoa.c)	- converts a number into a string
- [`ft_strmapi`](ft_strmapi.c)	- applies a function to each character of a string
- [`ft_striteri`](ft_striteri.c)	- applies a function to each character of a string
- [`ft_putchar_fd`](ft_putchar_fd.c)	- outputs a char to a file descriptor
- [`ft_putstr_fd`](ft_putstr_fd.c)	- outputs a string to a file descriptor
- [`ft_putendl_fd`](ft_putendl_fd.c)	- outputs a string to a file descriptor, followed by a new line
- [`ft_putnbr_fd`](ft_putnbr_fd.c)	- outputs a number to a file descriptor

### Linked list functions (Bonus Part)

- [`ft_lstnew`](ft_lstnew_bonus.c)	- creates a new list element
- [`ft_lstadd_front`](ft_lstadd_front_bonus.c)	- adds an element at the beginning of a list
- [`ft_lstsize`](ft_lstsize_bonus.c)	- counts the number of elements in a list
- [`ft_lstlast`](ft_lstlast_bonus.c)	- returns the last element of a list
- [`ft_lstadd_back`](ft_lstadd_back_bonus.c)	- adds an element at the end of a list
- [`ft_lstclear`](ft_lstclear_bonus.c)	- deletes and free list
- [`ft_lstiter`](ft_lstiter_bonus.c)	- applies a function to each element of a list
- [`ft_lstmap`](ft_lstmap_bonus.c)	- applies a function to each element of a list and returns a new list with the return of all nodes iteration

## Usage

#### Makefile targets
* `make`or `make all` - compile library libft.a without bonus functions
* `make bonus` - compile library libft.a with bonus functions
* `make clean` - remove all object files
* `make fclean` - remove all object files and library libft.a
* `make re` - remove all object files and library libft.a, and recompile library without bonus

#### Use the library in your code
After compiling the library libft.a, include the header in your code :
```c
#include "libft.h"
```
Compile your `main.c` code using
```bash
[ gcc | clang | cc ] main.c -I path/to/libft.h -L path/to/libft.a -lft
```
Alternatively, if your `main.c` file is located at the root of this repository :
```bash
[ gcc | clang | cc ] main.c libft.a
```

## Testers

I recommand you to code your own tests and compare your function to the existing libc function when you can. It is not only an important part of the learning process but also allows to properly imitate the behaviour of the libc that your system uses. Those are third-party tester to run complementary tests, use them at your own risk.

* Tripouille [libftTester](https://github.com/Tripouille/libftTester)
* alelievr [libft-unit-test](https://github.com/alelievr/libft-unit-test)
* 0x050f [libft-war-machine](https://github.com/0x050f/libft-war-machine)
* xicodomingues [francinette](https://github.com/xicodomingues/francinette)