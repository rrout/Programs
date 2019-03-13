

#include <stdio.h>
#include <stdlob.h>


#define MY_SIZEOF(var)		(size_t) (((&(char *)var) + 1) - (&(char *)var))
#define MY_SIZEOF(type)		(size_t) ((&(type *)0) + 1)


#define MY_OFFSETOF(structure, elem)	(size_t) ((&(structure *)0)->elem)

