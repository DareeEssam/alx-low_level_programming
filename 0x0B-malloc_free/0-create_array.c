#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Return: array pointer (success), null (fail)
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	x = (char *) malloc(sizeof(char) * size);

	if (x == NULL)
		return (0);

	while (i < size)
	{
		*(x + i) = c;
		i++;
	}
	*(x + i) = '\0';
	return (x);
}
