## Libft

### Libc functions

The term “libc” is commonly used as a shorthand for the “standard
C library” a library of standard functions that can be used by
all C programs (and sometimes by programs in other languages).

In **Libft**, some Libc functions will have to be redone. These
functions will have the **same prototypes and implement the same 
behaviors** as the original ones.

---

#### ft_isalpha

ft_isalpha() function checks whether a character is an alphabet (a to z and A-Z) or not.
If a character passed to ft_isalpha() is an alphabet, it returns a non-zero integer, if not it returns 0.


#### ft_isdigit

ft_isdigit() takes a single argument in the form of an integer and returns the value of type int.
If ft_isdigit() takes integer as an argument, character is passed to the function and converted
to its ASCII value for the check.


#### ft_isalnum

ft_isalnum() takes a character as argument. It returns 1 if this argument is an alphanumeric char, and 0 if not.


#### ft_isascii

ft_isascii() checks whether its argument is a 7-bit unsigned char value that fits into the ASCII character set.

#### ft_isprint

Function ft_isprint() takes a single argument in the form of an integer and returns a value of type int.
If ft_isprint() takes integer as an argument, character is passed to the function. Internally, the character 
is converted to its ASCII value for the check. If a character passed to ft_isprint() is a printable character,
it returns non-zero integer, if not it returns 0.


#### ft_strlen

The ft_strlen() function takes a string as an argument and returns its length. The returned value is of type size_t (an unsigned integer type).


#### ft_memset

The ft_memset() function is used to set the first n bytes of dest to the value c. The value of c is converted to an unsigned character.
The ft_memset() function returns a pointer to the memory area s.


#### ft_bzero

The ft_bzero() function erases the data in the n bytes of the memory starting at the location pointed to by s, by writing zeros (bytes
containing '\0') to that area.


#### ft_memcpy

The ft_memcpy() function in C and C++ is used to copy a block of memory from one location to another. Unlike other copy functions, the memcpy function 
copies the specified number of bytes from one memory location to the other memory location regardless of the type of data stored.
This function returns a pointer to the memory location where data is copied.


#### ft_memmove

ft_memmove() copies n characters from the object pointed to by s2 into the object pointed to by s1. It returns a pointer to the destination (s1).

