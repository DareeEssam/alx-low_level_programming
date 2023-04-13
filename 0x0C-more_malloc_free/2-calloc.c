#include "main.h"
#include <stdlib.h>

/**
 * *_memset - give memory a constant byte
 * @m: memory area
 * @c: char to copy
 * @n: number of times
 * Return: pointer to the memory area m
 */
char *_memset(char *m, char c, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		m[i] = c;
	}

	return (m);
}

/**
 * *_calloc - allocates memory for an array of nmemb
 * @nmemb: number of array elements
 * @size: size of element
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *x;

	if (nmemb == 0 || size == 0)
		return (NULL);

	x = malloc(size * nmemb);

	if (x == NULL)
		return (NULL);

	_memset(x, 0, nmemb * size);

	return (x);
}
