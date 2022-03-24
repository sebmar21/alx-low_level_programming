/**
 * _strcmp - a function that compare two strings
 *
 * @s1: string 1 inpute to compare
 * @s2: against this other string 2
 *
 * Return: 0 if s1 and s2 is equal
 *         negative integer if the stopping character
 *               in @s1 was less than the stopping
 *               character in @s2
 *         positive integer if the stooping character
 *               in @s1 was greatr than the stopping
 *               character in @s2
 */

int _strcmp(char *s1, char *s2)
{
        int i = 0, r;

        /**
         * iterate through src and
         * compare it with dest
         */
        while (s[i] != '\0' && s2[i] != '\0')
        {
                /**
                 * if they differ by a single character
                 * don't iterate further
                 */
                if (s1[i] != s2[i])
                {
                        /*
                         * return the differencebetween
                         * the two characters
                         */
                        r = s1[i] - s2[i];
                        break;

        }
        else
        {
                r = s1[i] - s2[i];
        }
        i++;
        }
        return (r);
}

