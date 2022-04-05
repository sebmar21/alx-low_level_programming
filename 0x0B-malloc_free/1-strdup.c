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
	abc = malloc((fan + 1) * sizeof(char));
	if (abc != NULL)
	{
		while(str[j])
		{
			abc[j] = str[j];
			j++;
		}
		abc[j] = '\0';
	}
	return (abc);
}
