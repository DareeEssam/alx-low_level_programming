#include <stdio.h>
#include "main.h"

/**
 * main - print number of arguments
 * @argc: arguments number
 * @argv: array of arguments
 * Return: always 0 (success)
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
