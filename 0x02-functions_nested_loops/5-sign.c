#include "holberton.h"

/**
  * print_sign - Prints the sign of a number
  * @n: The number to be checked
  *
  * Return: 1 and pint + if n is greater than zero,
  * and print 0 if n is zero,
  * and print -1 if n is less than zero.
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n ==0) 
