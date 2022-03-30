#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that print a string
 *         trailing new line
 *@s: input string
 *
 * Return: nonnegative number (Success)
 */
 
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		putchar(*s);
	_puts_recursion(s + 1);
	}
        else
		putchar('\n');
}
