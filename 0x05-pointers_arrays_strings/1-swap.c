#include "main.h"

/**
 * swap_int - swaping 2 integers using a pointer
 * @a:integer
 * @b:integer
 * Return:void
 */
void swap_int(int *a, int *b)
{
	int ip;

	ip= *a;
	*a = *b;
	*b = ip;
	return;

}
