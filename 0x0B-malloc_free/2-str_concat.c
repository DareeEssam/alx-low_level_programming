#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concat two srrings
 * @s1: first string
 * @s2: second string
 *
 * Return: concatination (success) , NULL (fail)
 */
char *str_concat(char *s1, char *s2)
{
	char *c;
	unsigned int x = 0, y = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	c = malloc(sizeof(char) * (len1 + len2 + 1));
	if (c == NULL)
		return (NULL);

	x = 0;
	y = 0;

	if (s1)
	{
		while (x < len1)
		{
			c[x] = s1[x];
			x++;
		}
	}

	if (s2)
	{
		while (x < (len1 + len2))
		{
			c[x] = s2[y];
			x++;
			y++;
		}
	}
	c[x] = '\0';

	return (c);
}
