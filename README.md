# Libft 

*This project has been created as part of 42 curriculum by tsordo-o.*

## Description

Libft is a library of functions that try to recreate the most used C standard functions, as accurate as possible. The objective of this project is to learn and understand the behavior and usage of these functions.

## Instructions

### Requirements

The make utility and gcc compiler must be installed.

#### Linux

Check first if utility is already installed:

```
gcc --version
gcc (Ubuntu 12.3.0-1ubuntu1~22.04.3) 12.3.0
```

```
make --version
GNU Make 4.3
```

If no installation is found, run:

```
sudo apt-get install make
```

```
sudo apt update && sudo apt install build-essential
```

### Installation

Clone repo first. Run `make` to compile the library and use it. Included Makefile's commands:

```
make all/make
```

Compiles every `.c` file into a `.o` object file, then bundles them all into `libtf.a`.

```
make clean
```

Deletes all `.o` files.

```
make fclean
```

Runs `clean`, then also deletes `libft.a`.

```
make re
```

Runs `fclean` then rebuilds everything from scratch.

### Usage

`libft.a` is a static library, meaning it's merged directly into the program's executable during the final linking phase of compilation. Therefore, in order to use it in another project it must be passed to the compiler with the following command:

```
cc main.c libft.a -o <program_name>
```

The following header must also be include in the source:

```
#include "libft.h"
```

## Functions

### Notes

Some of this functions work with a custom struct defined in libft.h

```
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;
```

### Index

| Name  | Brief Description |
| ------------- |:-------------:|
| [isalpha](#ft_isalpha) | checks for an alphabetic character |
| [isdigit](#ft_isdigit) | checks for a digit |
| [isalnum](#ft_isalnum) | checks for an alphanumeric character |
| [isascii](#ft_isascii) | checks for a value included in the ASCII table |
| [isprint](#ft_isprint) | checks for any printable character |
| [memset](#ft_memset) | fills bytes of memory with desired byte value |
| [bzero](#ft_bzero) | erases data in set memory area |
| [memcpy](#ft_memcpy) | copies bytes from a source to a destination, overlap is not allowed |
| [memmove](#ft_memmove) | copies bytes from a source to a destination, overlap is allowed |
| [strlcpy](#ft_strlcpy) | copies source string to destination |
| [strlcat](#ft_strlcat) | concatenates source string to destination |
| [toupper](#ft_toupper) | converts lowercase letters to uppercase |
| [tolower](#ft_tolower) | converts uppercase letters to lowercase |
| [strchr](#ft_strchr) | returns a pointer to the first occurrence of a character |
| [strrchr](#ft_strrchr) | returns a pointer to the last occurrence of a character |
| [strncmp](#ft_strncmp) | compares two strings |
| [memchr](#ft_memchr) | scans bytes of memory for the first instance of a character |
| [memcmp](#ft_memcmp) | compares n bytes of memory |
| [strnstr](#ft_strnstr) | locates first occurrence of a substring in a 'big' string |
| [atoi](#ft_atoi) | converts a string to an integer value |
| [calloc](#ft_calloc) | allocates memory for an array of elements, setting their memory to zero |
| [strdup](#ft_strdup) | duplicates a string |
| [substr](#ft_substr) | creates a subtring from a source string |
| [strjoin](#ft_strjoin) | creates a string result of the concatenation of two source strings |
| [strtrim](#ft_strtrim) | creates a string after deleting desired set of characters from the start and end of a source string |
| [split](#ft_split) | creates an array of strings from a source string after 'spliting' it according to a given delimiter |
| [itoa](#ft_itoa) | creates a string after converting a int to a string representation of it |
| [strmapi](#ft_strmapi) | creates a string after iterating a source string while aplying desired function to each of it's characters using their respective index |
| [striteri](#ft_striteri) | iterates a string while running desired function to each of it's characters |
| [putchar_fd](#ft_putchar_fd) | sends a character to a specified file descriptor |
| [putstr_fd](#ft_putstr_fd) | sends a string to a specified file descriptor |
| [putendl_fd](#ft_putendl_fd) | sends a string to a specified file descriptor followed by a `new line` |
| [putnbr_fd](#ft_putnbr_fd) | sends an int to a specified file descriptor |
| [lstnew](#ft_lstnew) | creates a new 'node' from a given `content` |
| [lstadd_front](#ft_lstadd_front) | adds a node to the beginning of a list |
| [lstsize](#ft_lstsize) | counts number of nodes in a list |
| [lstlast](#ft_lstlast) | returns list's last node |
| [lstadd_back](#ft_lstadd_back) | adds a node to the end of a list |
| [lstdelone](#ft_lstdelone) | frees a node's content before freeing the node itself |
| [lstclear](#ft_lstclear) | deletes every node's content and frees them, from a list |
| [lstiter](#ft_lstiter) | iterates through list and aplies desired function to each node's `content` |
| [lstmap](#ft_lstmap) | creates a new list result of iterating a source list and aplying desired function to each node's `content` |

---
### Prototypes
<a id="ft_isalpha"></a>
```
int		ft_isalpha(int c);
```
#### Description

checks c,  which must have the value of an unsigned char or EOF, for an alphabetic character; in the standard "C" locale, it is equivalent to (isupper(c) || islower(c)).  In some locales, there may be additional characters for which isalpha() is true—letters which are neither uppercase nor lowercase.

#### Return Value

The values returned are nonzero if the character c falls into the tested class, and zero if not.

---
<a id="ft_isdigit"></a>
```
int		ft_isdigit(int c);
```
#### Description

checks c,  which must have the value of an unsigned char or EOF,

#### Return Value

The values returned are nonzero if the character c falls into the tested class, and zero if not.

---
<a id="ft_isalnum"></a>
```
int		ft_isalnum(int c);
```
#### Description

checks c,  which must have the value of an unsigned char or EOF, for an alphanumeric  character;  it  is  equivalent  to  (isalpha(c)  ||  is‐digit(c)).

#### Return Value

The values returned are nonzero if the character c falls into the tested class, and zero if not.

---
<a id="ft_isacii"></a>
```
int		ft_isascii(int c);
```
#### Description

checks wether c,  which must have the value of an unsigned char or EOF, is a 7-bit unsigned char value that fits into the ASCII character set.


#### Return Value

The values returned are nonzero if the character c falls into the tested class, and zero if not.

---
<a id="ft_isprint"></a>
```
int		ft_isprint(int c);
```
#### Description

checks c,  which must have the value of an unsigned char or EOF, for any printable character including space.

#### Return Value

The values returned are nonzero if the character c falls into the tested class, and zero if not.

---
<a id="ft_memset"></a>
```
void	*ft_memset(void *s, int c, size_t n);
```

#### Description

The  memset()  function fills the first n bytes of the memory area pointed to by s with the constant byte c.

#### Return Value

The memset() function returns a pointer to the memory area s.

---
<a id="ft_bzero"></a>
```
void	ft_bzero(void *s, size_t n);
```
#### Description

The  bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes containing '\0') to that area.

#### Return Value

None

---
<a id="ft_memcpy"></a>
```
void	*ft_memcpy(void *dest, const void *src, size_t n);
```
#### Description

The  memcpy() function copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.  Use memmove if the memory areas do overlap.

#### Return Value

The memcpy() function returns a pointer to dest.

---
<a id="ft_memmove"></a>
```
void	*ft_memmove(void *dest, const void *src, size_t n);
```
#### Description

The memmove() function copies n bytes from memory area src to memory area dest.  The memory areas may overlap: copying takes place as though the bytes in src are first copied  into  a temporary  array  that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.

#### Return Value

The memmove() function returns a pointer to dest.

---
<a id="ft_strlcpy"></a>
```
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
```
#### Description
The strlcpy() copies a string.  It's designed to be safer, more consistent, and less error prone replacements for strncpy. Unlike said function, strlcpy() takes the full size of the buffer (not just the length) and guarantee to NUL-terminate the result (as long as size is larger than 0). Note that a byte for the NUL should be included in size.  Also note that strlcpy() only operates on true “C” strings.  This means that src must be NUL-terminated.

The strlcpy() function copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.

#### Return Value

strlcpy() returns the total length of the string it tried to create.  That means the length of src.

---
<a id="ft_strlcat"></a>
```
size_t		ft_strlcat(char *dst, const char *src, size_t size);
```
#### Description

strlcat() concatenates strings.  It's designed to be safer, more consistent, and less error prone replacements for strncat. Unlike said function, strlcat() take the full size of the buffer (not just the length) and guarantee to NUL-terminate the result (as long as there is at least one byte free in dst). Note that a byte for the NUL should be included in size.  Also note that strlcat() only operates on true “C” strings.  This means that  both src and dst must be NUL-terminated.

#### Return Value

strlcat() returns the total length of the string it tried to create. For strlcat() that means the initial length of dst plus the length of src.  While this may seem somewhat confusing, it was done to make truncation detection simple.
Note, however, that if strlcat() traverses size characters without finding a NUL, the length of the string is considered to be size and the destination string will not be NUL-terminated (since there was no space for the NUL).  This keeps strlcat() from running off the end of a string.  In practice this should not happen (as it means that either size is incorrect or that dst is not a proper “C” string).  The check exists to prevent potential security problems in incorrect code.

---
<a id="ft_tolower"></a>
```
int			ft_tolower(int c);
```
#### Description

If c is an uppercase letter, tolower() returns its lowercase  equivalent,  if a lowercase representation  exists  in  the  current locale. Otherwise, it returns c.

#### Return Value

The  value  returned is that of the converted letter, or c if the conversion was not possible.

---
<a id="ft_toupper"></a>
```
int			ft_toupper(int c);
```
#### Description

If c is a lowercase letter, toupper() returns its uppercase equivalent, if an uppercase representation exists in the current locale.  Otherwise, it  returns  c.

#### Return Value

The  value  returned is that of the converted letter, or c if the conversion was not possible.

---
<a id="ft_strchr"></a>
```
char		*ft_strchr(const char *s, int c);
```
#### Description

The  strchr()  function returns a pointer to the first occurrence of the character c in the string s.

#### Return Value

strchr() returns a pointer to the matched character or NULL if the character is not found.  The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.

---
<a id="ft_strrchr"></a>
```
char		*ft_strrchr(const char *s, int c);
```
#### Description

The strrchr() function returns a pointer to the last occurrence of the character c  in  the string s.

#### Return Value

strrchr() returns a pointer to the matched character or NULL if the character is not found.  The terminating null byte is considered part of the string, so that if c is specified as '\0', these functions return a pointer to the terminator.

---
<a id="ft_strncmp"></a>
```
int			ft_strncmp(const char *s1, const char *s2, size_t n);
```
#### Description

The strncmp() function compares the two strings s1 and s2 (at most) n bytes from them. The locale is not taken into account (for a locale-aware comparison, see strcoll(3)).  The comparison is  done  using  unsigned characters.

strncmp() returns an integer indicating the result of the comparison, as follows:

• 0, if the s1 and s2 are equal;

• a negative value if s1 is less than s2;

• a positive value if s1 is greater than s2.

#### Return Value

The strncmp() function returns an integer less than, equal to, or greater than zero  if  s1  (or  the  first  n bytes thereof) is found, respectively, to be less than, to
match, or be greater than s2.

---
<a id="ft_memchr"></a>
```
void		*ft_memchr(const void *s, int c, size_t n);
```
#### Description

The  memchr() function scans the initial n bytes of the memory area pointed to by s for the first instance of c. Both c and the bytes of the memory area pointed to by  s  are  interpreted as unsigned char.

#### Return Value

The  memchr() function returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.

---
<a id="ft_memcmp"></a>
```
int			ft_memcmp(const void *s1, const void *s2, size_t n);
```
#### Description

The memcmp() function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.

#### Return Value

The memcmp() function returns an integer less than, equal to, or greater than zero  if  the first  n  bytes of s1 is found, respectively, to be less than, to match, or be greater than the first n bytes of s2.

For a nonzero return value, the sign is determined by the sign of  the  difference  between the first pair of bytes (interpreted as unsigned char) that differ in s1 and s2.

If n is zero, the return value is zero.

---
<a id="ft_strnstr"></a>
```
char		*ft_strnstr(const char *big, const char *little,
						size_t len);
```
#### Description

The strnstr() function locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.  Characters that appear after a ‘\0’ character are not searched.

#### Return Value

If little is an empty string, big is returned; if little occurs nowhere in big, NULL is returned; otherwise a pointer to the first character of the first occurrence of little is returned.

---
<a id="ft_atoi"></a>
```
int			ft_atoi(const char *nptr);
```
#### Description

The  atoi()  function converts the initial portion of the string pointed to by nptr to int.

The  string may begin with an arbitrary amount of white space (as determined by isspace(3)) followed by a single optional '+' or '-' sign.

#### Return Value

The converted value or 0 on error.

---
<a id="ft_calloc"></a>
```
void		*ft_calloc(size_t nmemb, size_t size);
```
#### Description

The calloc() function allocates memory for an array of nmemb elements of  size  bytes  each and  returns  a  pointer  to the allocated memory.  The memory is set to zero.  If nmemb or size is 0, then calloc() returns either NULL, or a unique pointer value that can  later  be successfully passed to free().  If the multiplication of nmemb and size would result in integer overflow, then calloc() returns an error.

#### Return Value

The calloc()  function returns a pointer to the allocated memory, which is suitably aligned for any built-in type.  On error, it returns NULL. NULL  may also  be  returned by a successful call to malloc() with a size of zero, or by a successful call to calloc() with nmemb or size equal to zero.

---
<a id="ft_strdup"></a>
```
char		*ft_strdup(const char *s);
```
#### Description

The  strdup() function returns a pointer to a new string which is a duplicate of the strings.  Memory for the new string is obtained with malloc(3), and can be freed with free(3).

#### Return Value

On  success,  the strdup() function returns a pointer to the duplicated string.  It returns NULL if insufficient memory was available.

---
<a id="ft_substr"></a>
```
char		*ft_substr(char const *s, unsigned int start, size_t len);
```
#### Description

substr() reserves memory (with malloc(3)) and returns a substring of the `s` string.
The substring starts from the `start` index and has a max length of `len`.

#### Return Value

substr() returns resulting substring or NULL if memory reservation failed.

---
<a id="ft_strjoin"></a>
```
char		*ft_strjoin(char const *s1, char const *s2);
```
#### Description

strjoin() reserves memory (with malloc(3)) and returns a new string, formed with the concatenation of `s1` and `s2`.

#### Return Value

New string or NULL if memory reservation failed.

---
<a id="ft_strtrim"></a>
```
char		*ft_strtrim(char const *s1, char const *set);
```
#### Description

Reserves memory (with malloc(3)) and returns a copy of `s1` with any characters from `set` deleted if found on the start or end of it.

#### Return Value

Resulting `trimmed` string or NULL if memory reservation failed.

---
<a id="ft_split"></a>
```
char		**ft_split(char const *s, char c);
```
#### Description

Reserves memory (with malloc(3)) and returns an array of strings gotten after dividing the string `s` in `substrings` using `c` as a `delimiter`.
Eeach of the array's strings is reserved independently.
The pointers array is also reserved dinamically.
The returned array ends with a pointer to NULL.

#### Return Value

The resulting array of strings after the division.
NULL if any of the memory reservations fail.
Resulting array and each of it's strings can be freed with free().

---
<a id="ft_itoa"></a>
```
char		*ft_itoa(int n);
```
#### Description

Reserves memory (with malloc(3)) and returns a string that's the representation of the value of the integer received as an argument. It's capable of managing negative numbers.

#### Return Value

The string that represents the number.
NULL if memory allocation failed.

---
<a id="ft_strmapi"></a>
```
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
```
#### Description

Aplies the function `f` to each of string `s`'s characters, passing their respective index as first argument and the character itself as the second argument.
A new string is created (with malloc(3)) to store the results of each of `f` applications.

#### Return Value

The string created after the correct use of `f` over each character.
NULL if the memory reservation failed.

---
<a id="ft_striteri"></a>
```
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
```
#### Description

Aplies the function `f` to each of string `s`'s characters, passing as arguments each of the character's index and their address, that can be modified if necessary.

#### Return Value

None.

---
<a id="ft_putchar_fd"></a>
```
void		ft_putchar_fd(char c, int fd);
```
#### Description

Sends character `c` to specified file descriptor `fd`.

#### Return Value

None.

---
<a id="ft_putstr_fd"></a>
```
void		ft_putstr_fd(char *s, int fd);
```
#### Description

Sends string `s` to specified file descriptor `fd`.

#### Return Value

None.

---
<a id="ft_putendl_fd"></a>
```
void		ft_putendl_fd(char *s, int fd);
```
#### Description

Sends string `s` to given file descriptor `fd`, followed by a `new line`.

#### Return Value

None.

---
<a id="ft_putnbr_fd"></a>
```
void		ft_putnbr_fd(int n, int fd);
```
#### Description

Sends integer `n` to given file descriptor `fd`.

#### Return Value

None.

---
<a id="ft_lstnew"></a>
```
t_list		*ft_lstnew(void *content);
```
#### Description

Reserves memory (with malloc(3)) and returns a `new` node. `content` variable is initialized with parameter `content`'s content. While `next` variable is initialized with `NULL`.

#### Return Value

A pointer to the `new` node.

---
<a id="ft_lstadd_front"></a>
```
void		ft_lstadd_front(t_list **lst, t_list *new);
```
#### Description

Add `new` node to the beginning of the list `lst`.

#### Return Value

None.

---
<a id="ft_lstsize"></a>
```
int			ft_lstsize(t_list *lst);
```
#### Description

Counts number of nodes in a list `lst`.

#### Return Value

List `lst` length.

---
<a id="ft_lstlast"></a>
```
t_list		*ft_lstlast(t_list *lst);
```
#### Description

Returns the last node of a list `lst`.

#### Return Value

List `lst` last node.

---
<a id="ft_lstadd_back"></a>
```
void		ft_lstadd_back(t_list **lst, t_list *new);
```
#### Description

Add `new` node to the end of the list `lst`.

#### Return Value

None.

---
<a id="ft_lstdelone"></a>
```
void		ft_lstdelone(t_list *lst, void (*del)(void *));
```
#### Description

Takes a node `lst` as a parameter and frees it's content using the `del` function, given as a paramter aswell. It also frees the node `lst` itself.

#### Return Value

None.

---
<a id="ft_lstclear"></a>
```
void		ft_lstclear(t_list **lst, void (*del)(void *));
```
#### Description

Deletes node `lst` content and frees it, aswell as every consecutive node, using function `del` and free(3).

#### Return Value

None.

---
<a id="ft_lstiter"></a>
```
void		ft_lstiter(t_list *lst, void (*f)(void *));
```
#### Description

Iterates list `lst` and aplies function `f` to each of it's nodes content.

#### Return Value

None. 

---
<a id="ft_lstmap"></a>
```
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
```
#### Description

Iterates through  list `lst` and applies function `f` to each of it's nodes content. Creates a new list with each of the results given after aplying function `f`. Function `del` is used to delete each of the nodes already successfully created, in case any memory reservation fails.

#### Return Value

The resulting new list.
NULL if any of the memory reservations failed.

---
## Resources
*The following resources have been used in order to successfully finish this project.*

42's libft subject.pdf:
> The main guide to determined project's content and requirements.

Francinette a.k.a Paco:
> Unofficial tester tool, used only to help to debug and check for errors.

Claude:
> A next-generation AI assistant, used only to understand simple matters like type casting and so.
