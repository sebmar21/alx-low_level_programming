#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - a function that print
 *                   string in reverse
 *@s: input string
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int str[100] = "abc";

	_print_rev_recursion(s + 1);

	printf("%d ",rev(str));
	return (0);
}
