 #include "main.h"

/**
 * cap_string - capitalizes all words in a string
 * @s: string
 * Return: address of s
 */
char *cap_string(char *s)
{
	int i = 0, x;
	char a[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (x = 0; x <= 12; x++)
				{
					if (a[x] == *(s + i - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
