#include <stdio.h>
#include "main.h"

/**
 * main - print program name
 * @avgc: arguments number
 * @avgv: array of arguments
 * Return: always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
