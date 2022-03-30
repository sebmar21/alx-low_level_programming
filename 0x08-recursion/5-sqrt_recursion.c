#include"main.h"

/**
 * _sqrt_recursion - a function that
 *                   returns the natural square
 *                   root of anumber
 *@n: input number
 *@i: input number
 *Return: the square root of x
 *
 */

int _sqrt_recursion(int n int i)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (n);
	else
		return (_sqrt_recursion(n - 1));
}
