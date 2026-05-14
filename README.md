*This project has been created as part of 42 curriculum by tsordo-o.*

## Description

`Libftprintf` is an improvement of the `Libft` library (see `Libft` <a href="https://github.com/t0bi-0ss/libft/blob/main/README.md">README.md</a>), as it contains all functions included in it with the addition of `ft_printf()`, a function that tries to recreate the same utility and way of working that the `printf()` function has, with the exception that is limited to the following format specifiers:

* `%c`
* `%s`
* `%p`
* `%d`
* `%i`
* `%u`
* `%x`
* `%X`
* `%%`
#### Disclaimer:
* `ft_printf()` doesn't take `flags`, `width`, `.precision`, or `length`.
* if a `%` character is found followed by a `char` not within the supported format specifiers `ft_printf` will print "%`char`".

The intention for this project is to improve further on my coding skills while learning new concepts needed to acomplish the recreation of the `printf()` function, like `variadic functions`, `va_list` structure and some of the macros related to it `(va_start, va_arg, va_end)`.


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

#### libftprintf library:
`libftprintf.a` is a static library, meaning it's merged directly into the program's executable during the final linking phase of compilation. Therefore, in order to use it in another project, `if located in the same directory as main.c`, it must be passed to the compiler with the following command:

```
cc main.c libftprintf.a -o <program_name>
```

The following header must also be include in the source:

```
#include "ft_printf.h"
```

#### ft_printf():

##### Prototype

```
int		ft_printf(char const *format, ...);
```


##### Utilization:

Writes the string pointed by `format` to the standard output (`stdout`). If `format` includes format specifiers (`subsequences beginning with %`), the additional arguments `(...)` following `format` are formatted and inserted in the resulting string replacing their respective specifiers.

##### Arguments:

`ft_printf()` function takes a pointer to a string (in this case, called `format`) and `(...)`, meaning it may expect a sequence of additional arguments.

#### Return value:

`ft_printf()` function will return the number of bytes written to `stdout` `(fd = 1)`, if successful. If any error occurs while running, the process will stop and a `(-1)` will be returned, signaling something went wrong.

#### Format specifiers:

* `%c`: defines and interprets corresponding argument as `char`

* `%s`: defines and interprets corresponding argument as `string of characters`
* `%p`: defines and interprets corresponding argument as `pointer address`
* `%d`: defines and interprets corresponding argument as `signed decimal integer`
* `%i`: defines and interprets corresponding argument as `signed decimal integer`
* `%u`: defines and interprets corresponding argument as `unsigned decimal integer`
* `%x`: defines and interprets corresponding argument as `unsigned hexadecimal integer` (lowercase)
* `%X`: defines and interprets corresponding argument as `unsigned hexadecimal integer` (uppercase)
* `%%`: acts as an `escape character`, meaning it is used to signal ft_printf() to just print `'%'` 


---
## Notes

### Algorithm justification

In order to recreate the `printf()` function as accurate as possible, I had to rely on the `write()` function almost entirely. Therefore I rewrote some of my functions from the `libft` library, like the `ft_putchar()` function, so I could make them return the written bytes by the `write()` function and check if it had any `problems` trying to do so.

My main idea of how to recreate the printf() function was to have one function that 'decides' what to do with the given flag after a `'%'` is found in the source string, and then it passes the `'written bytes'` to another function that registers all of them.

A control `error` was added everytime the `write()` function is called, so that, if it `fails` the program is stopped and a `'-1'` is `returned` signaling an `error` was encountered.

---
## Resources
*The following resources have been used in order to successfully finish this project.*

42's ft_printf <a href="https://cdn.intra.42.fr/pdf/pdf/189915/es.subject.pdf">subject.pdf</a>:
> The main guide to determined project's content and requirements.

Francinette a.k.a Paco (git repository <a href="https://github.com/xicodomingues/francinette">here</a>):
> Unofficial tester tool, used exclusively to help to debug and check for errors.

<a href="https://claude.ai/login">Claude</a>:
> A next-generation AI assistant, used exclusively to understand new concepts and their functionality, like variadic functions, va_list structures and the macros related to it.
