#include <stdio.h>

/**
 * factorial - a function that returns
 *             the factorial of
 *             a given number
 *@n: input integer
 *
 * Return (0) Always (Success)
 */

int factorial(int n)
{
	if (n > 0)
		factorialn = n*factorial(n-1);
	return n*factorial(n-1);
	else
		return (-1);
}
