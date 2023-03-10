#include "main.h"

/**
  * _strncat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int yam = 0, x = 0;

	while (dest[yam])
	{
		yam++;
	}

	while (x < n && src[x])
	{
		dest[yam] = src[x];
		yam++;
		x++;
	}

	dest[yam + n + 1] = '\0';

	return (dest);
}

