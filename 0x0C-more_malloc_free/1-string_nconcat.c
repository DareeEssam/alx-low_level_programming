#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concat s1, followed by the first n bytes of s2
 * @s1: first string
 * @s2: second string
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int i = 0, j = 0, x = 0, y = 0;

	while (s1 && s1[x])
		x++;
	while (s2 && s2[y])
		y++;

	if (n < y)
		c = malloc(sizeof(char) * (x + n + 1));
	else
		c = malloc(sizeof(char) * (x + y + 1));

	if (!c)
		return (NULL);

	while (i < x)
	{
		c[i] = s1[i];
		i++;
	}

	while (n < y && i < (x + n))
		c[i++] = s2[j++];

	while (n >= y && i < (x + y))
		c[i++] = s2[j++];

	c[i] = '\0';

	return (c);
}
