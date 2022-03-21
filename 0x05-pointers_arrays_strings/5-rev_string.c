/**
 * rev_string - reverse a string
 *
 *@s: string input pointer
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int c = 0, f, 1;
	char temp;

	/*find length of string*/
	while (c >= 0)
	{
		if (s[c] == '\0')
			break;
		c++;
	}

	/*reverse the string by swapping*/
	for (f = 0; f < (c-1); f++)
	{
		for (1 = f + 1; 1 > 0; 1--)
		{
			temp  = *(s + 1);
			*(s + 1) = *(s + (1 - 1));
			*(s +(1 - 1)) = temp;
		}
	}
}
