 #include "main.h"
#include <stdio.h>

/**
  * _strcat - Concatenates two strings
  * @mawuli: The destination string
  * @samah: The source string
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *mawuli, char *samah)
{
	int nice = 0, i;

	while (mawuli[nice])
	{
		nice++;
	}

	for (i = 0; samah[i] != 0; i++)
	{
		mawuli[nice] = samah[i];
		nice++;
	}

	mawuli[nice] = '\0';
	return (mawuli);
}

