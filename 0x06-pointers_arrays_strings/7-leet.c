#include "main.h"

/**
 * leet - encodes a string into 1337
 * @w: string to encode
 *
 * Return: address of w
 */
char *leet(char *w)
{
	int i, x;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; *(w + i); i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (a[x] == w[i])
				w[i] = b[x];
		}
	}
	return (w);
}
