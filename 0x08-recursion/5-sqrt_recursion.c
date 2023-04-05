#include "main.h"

int actual_sqrt_recursion(int x, int i);

/**
 * _sqrt_recursion - return the natural square root of number
 * @x: the number
 * Return: the result
 */
int _sqrt_recursion(int x)
{
	if (x < 0)
		return (-1);
	return (actual_sqrt_recursion(x, 0));
}

/**
 * actual_sqrt_recursion - recueses to find the natural
 * square root of number
 * @x: the number
 * @i: iterator
 * Return: the result
 */
int actual_sqrt_recursion(int x, int i)
{
	if (i * i > x)
		return (-1);
	if (i * i == x)
		return (i);
	return (actual_sqrt_recursion(x, i + 1));
}

