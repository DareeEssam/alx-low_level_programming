#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function used to allocate memory
 * @b: number of bytes
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);

	if (x == NULL)
		exit(98);

	return (x);
}
