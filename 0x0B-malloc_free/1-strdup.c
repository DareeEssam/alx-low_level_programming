#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a new string
 * which is a duplicate of the string
 * @str: duplicate string
 * Return: 0
 */
char *_strdup(char *str)
{
	char *c;
	int x = 0, y = 0;

	if (str == NULL)
		return (NULL);

	while (str[x] != '\0')
		x++;

	c = malloc(sizeof(char) * (x + 1));

	if (c == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		c[y] = str[y];

	return (c);
}
