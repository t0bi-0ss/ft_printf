*This project has been created as part of 42 curriculum by tsordo-o.*

## Description

Libft is a library of functions that try to recreate the most used C standard functions, as accurate as possible. The objective of this project is to learn and understand the behavior and usage of these functions.

## Instructions

### Requirements

The `make` utility and a `C` compiler must be installed.

### Installation

Clone repo first. Run `make` to compile the library and use it. Included Makefile's commands:

```
make all
```

 1. Compiles every `.c` file into a `.o` object file from `libft/`
 2. Bundles all of them into `printf.a`
 3. A copy of `printf.a` is made named `libftprintf.a`
 4. Every `.c` file from parent directory is added to `libftprintf.a` after being compiled into a `.o` object file

```
make clean
```

Deletes all `.o` files both in `parent directory` and `/libft`.

```
make fclean
```

Runs `clean`, then also deletes `libftprintf.a` and `libft.a`.

```
make re
```

Runs `fclean` then rebuilds everything from scratch.

### Usage

`libftprintf.a` is a static library, meaning it's merged directly into the program's executable during the final linking phase of compilation. Therefore, in order to use it in another project it must be passed to the compiler with the following command:

```
cc main.c libftprintf.a -o <program_name>
```

The following header must also be include in the source:

```
#include "ft_printf.h"
```
---
## Notes

### Algorithm justification

In order to recreate the `printf()` function as accurate as possible, I had to rely on the `write()` function almost entirely. Therefore I rewrote some of my functions from the `libft` library, like the `ft_putchar()` function, so I could make them return the written bytes by the `write()` function and check if it had any `problems` trying to do so.

My main idea of how to recreate the printf() function was to have one function that 'decides' what to do with the given flag after a `'%'` is found in the source string, and then it passes the `'written bytes'` to another function that registers all of them.

A control `error` was added everytime the `write()` function is called, so that, if it `fails` the program is stopped and a `'-1'` is `returned` signaling an `error` was encountered.

---
## Resources
*The following resources have been used in order to successfully finish this project.*

42's ft_printf subject.pdf:
> The main guide to determined project's content and requirements.

Francinette a.k.a Paco:
> Unofficial tester tool, used only to help to debug and check for errors.

Claude:
> A next-generation AI assistant, used only to understand simple matters like type casting and so.
