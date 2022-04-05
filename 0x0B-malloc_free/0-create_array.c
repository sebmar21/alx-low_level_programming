/**
 * create_array - a function that creates
 *                an array of chars
 *                and initializes it with
 *                a specific char
 *@size: input number
 *@c: input char
 *Return: NULL
 */

char *create_array(unsigned int size, char c);
{
	unsigned int j;
	char *pol;

	if (size == 0)
		return (NULL);
	pol = malloc(size * sizeof(char));
	if (pol != NULL)
	{
		for (j = 0; j < size; j++)
			pol[j] = c;
	}

	return (pol);
}
