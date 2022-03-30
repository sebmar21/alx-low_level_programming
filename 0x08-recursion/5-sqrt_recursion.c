#include"main.h"
#include<stdio.h>

/**
 * _sqrt - a function that
 *          returns the natural square
 *          root of anumber
 *@n: input number
 *@i: input number
 *Return: Always 0
 */

int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	else
		return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - function
 *
 * @n: the number
 * Return: Always 0.
 */
 
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt(n, 0));
}
