-I'VE MADE THIS README WITH CLAUDE-

# libft tests

Simple test `main` files for every function of my 42 `libft`
(43 functions: libc re-implementations, additional functions, linked lists).

One file per function: `main_ft_<name>.c`. Each one prints the result
next to the expected value, so you can check it by eye.

## Usage

1. Copy the `main_*.c` files into your `libft` folder (or a subfolder).
2. Build the library: `make`
3. Compile and run one test:

       gcc -Wall -Wextra -Werror main_ft_atoi.c -I. -L. -lft
       ./a.out

If the tests are in a subfolder, adjust the paths:
`gcc -Wall -Wextra -Werror tests/main_ft_atoi.c -I. -L. -lft`

## Notes

- `#include <stdio.h>` is commented out in the files; `printf` is declared
  manually so everything still compiles with `-Wall -Wextra -Werror`.
- These tests cover common cases and edge cases only. They do not replace
  a full tester or `valgrind` for memory leaks.
- Do not submit these files with your project.
