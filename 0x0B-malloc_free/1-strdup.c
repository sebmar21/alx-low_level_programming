#include<stdlib.h>

/**
 * _strdup - a function that returns
 *           a pointer to a newly
 *           allocated space in memory
 *           contain copy of the string
 *           as parameter
 *@str: input string
 *Return: Always 0
 */

char *_strdup(char *str)
{
	char *abc;
	int fan = 0, j = 0;

	if (str == NULL)
		return (NULL);
	while (str[fan])
		fan++;
	fan = malloc((fan + 1) * sizeof(char));
	if (fan != NULL)
	{
		while(str[j])
		{
			fan[j] = str[j];
			j++;
		}
		fan[j] = '\0';
	}
	return (fan);
}
