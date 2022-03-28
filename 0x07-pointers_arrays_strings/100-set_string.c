#include "main.h"
#include <stdio.h>

/**
 * main - a function that set the value of apointer to char
 *
 * @s: input pointer
 * @to value of the character
 *
 *Return: Always 0 (Success)
 */

void set_string(char **s, char *to)
{
	char *S1 = "Today world";
	char *S2 = "Hello";

	printf("%s, %s\n", S1, S2);
	set_string(&S2, S1);
	printf("%s, %s\n" ,S1, S2);
	return (0);
}
	
