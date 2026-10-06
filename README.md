*This project has been created as part of the 42 curriculum by shobakiii.*

# libft

## Description

`libft` is a C library project that recreates a selection of standard C
library routines and adds utilities for string construction, file-descriptor
output, and singly linked lists. The goal is to build a reusable foundation
for later C projects by implementing these common operations in the project
itself.

There is no standalone application: the functions are meant to be compiled
into the static archive `libft.a`, then included and linked by another C
program. The public declarations and list-node type are in [`libft.h`](./libft.h).

## Library details

### Character classification and conversion

- `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, and `ft_isprint`
  check whether a character belongs to the corresponding character class.
- `ft_toupper` and `ft_tolower` convert an ASCII letter to upper or lower
  case, leaving other characters unchanged.

### Numbers

- `ft_atoi` parses the initial decimal integer in a string.
- `ft_itoa` allocates and returns a decimal string representation of an
  integer.

### Memory

- `ft_memset` fills a memory region with a byte value; `ft_bzero` sets a
  region to zero.
- `ft_memcpy` copies a byte range, while `ft_memmove` supports overlapping
  source and destination regions.
- `ft_memchr` searches a byte range for a value; `ft_memcmp` compares two
  byte ranges.
- `ft_calloc` allocates zero-initialized storage for an array.

### Strings

- `ft_strlen` measures a string; `ft_strdup` allocates a duplicate.
- `ft_strchr` finds the first occurrence of a character, and `ft_strrchr`
  finds the last.
- `ft_strncmp` compares up to a specified number of characters, and
  `ft_strnstr` searches for a substring within a specified length.
- `ft_strlcpy` copies a string into a size-limited destination, and
  `ft_strlcat` appends to a size-limited destination.
- `ft_substr` creates a substring; `ft_strjoin` concatenates two strings;
  `ft_strtrim` removes specified characters from the beginning and end.
- `ft_split` divides a string at a delimiter and returns an allocated array
  of strings.
- `ft_strmapi` creates a string by applying a callback to each character;
  `ft_striteri` applies a callback to each character in place. Both callbacks
  receive the character's index.

### File-descriptor output

- `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and `ft_putnbr_fd` write
  a character, string, string followed by a newline, or integer,
  respectively, to the supplied file descriptor.

### Singly linked lists

The `t_list` node declared in `libft.h` holds a `void *content` pointer and a
`next` pointer. The list routines provide the following operations:

- `ft_lstnew` allocates a node; `ft_lstadd_front` and `ft_lstadd_back` add a
  node at either end.
- `ft_lstsize` counts nodes, and `ft_lstlast` returns the final node.
- `ft_lstdelone` deletes one node, while `ft_lstclear` deletes a list. Both
  use a caller-supplied callback to dispose of node content.
- `ft_lstiter` applies a callback to each node's content.
- `ft_lstmap` applies a transformation callback to each node's content and
  builds a new list; its deletion callback is used to clean up if node
  allocation fails.

## Instructions

### Build

The Makefile is intended to compile the source files with GCC using
`-Wall -Wextra -Werror` and archive the object files as `libft.a`:

```sh
make
```

Available cleanup targets:

```sh
make clean   # remove object files
make fclean  # remove object files and libft.a
make re      # clean and rebuild
```

**Current build status:** `make` does not currently complete successfully.
In the checked-out sources, compilation stops at `ft_bzero.c` because its
definition's return type conflicts with the declaration in `libft.h`. The
Makefile also lists `ft_memccpy.c` and `ft_strncmp.c`, which are not present
in the repository, and there are other source/header inconsistencies to
resolve before the archive can be built and used reliably.

### Link the library

After the build issues are fixed and `libft.a` is available, include the
header in your program:

```c
#include "libft.h"
```

Then compile and link from the repository root:

```sh
cc -Wall -Wextra -Werror -I. main.c -L. -lft -o app
```

`-L.` searches the current directory for the archive, and `-lft` links
`libft.a`.

## Resources

- The 42 **libft** subject and evaluation materials.
- C library manual pages for the corresponding standard routines, such as
  `man 3 strlen`, `man 3 memcpy`, and `man 3 isalpha`.
- GNU Make manual: <https://www.gnu.org/software/make/manual/>.
- GCC documentation: <https://gcc.gnu.org/onlinedocs/>.

### AI usage

AI assistance was used to inspect the repository's public header, source-file
inventory, and Makefile, and to draft and organize this README, including its
library overview and usage instructions. No project source code was generated
or changed by AI as part of this README update.
