#include "main.h"

/**
  * _islower - Checks for lowercase character
  * @c: The character to be checked
  *
  * Return: 1 if char is lowercase, otherwise 0.
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
		else
			return (0);
	}
}


