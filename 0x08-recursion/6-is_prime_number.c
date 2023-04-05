#include "main.h"

int actual_prime(int x, int i);

/**
 * is_prime_number - check if integer is prime or not
 * @x: the number
 * Return: 1 if x is prime, 0 if not
 */
int is_prime_number(int x)
{
	if (x <= 1)
		return (0);
	return (actual_prime(x, x - 1));
}

/**
 * actual_prime - calculate if x is prime recursively
 * @x: the number
 * @i: iterator
 * Return: 1 if x is prime, 0 if not
 */
int actual_prime(int x, int i)
{
	if (i == 1)
		return (1);
	if (x % i == 0 && i > 0)
		return (0);
	return (actual_prime(x, i - 1));
}
