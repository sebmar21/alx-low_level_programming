#include"main.h"

/**
 * print_last_digit - print last digit of a number
 * @n: take number input
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int lastdigit;
	if (n < 0)
		last digit = -1 * (n %10)
	else
		lastdigit = n % 10;
	_putchar(lastdigit + '0');
	return (0);
}
