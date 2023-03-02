 #include "main.h"
#include <stdio.h>

/**
  * _strcat - Concatenates two strings
  * @dest: The destination string
  * @src: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int nice = 0, i;

	while (dest[nice])
	{
		nice++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[nice] = src[i];
		nice++;
	}

	dest[nice] = '\0';
	return (dest);
}

