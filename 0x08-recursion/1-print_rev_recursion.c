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
	char str[100] = "abc";

	printf("%s ",strrev(str));
	return (0);
}
