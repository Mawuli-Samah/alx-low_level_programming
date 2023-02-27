#include "main.h"

/**
 * swap_int - swaps the values of integers
 * @a: An integer to swap
 * @b: Abother integer to swap
 * 
 * Return: void
 */
void swap_int(int *a, int *b)
{
    int ip;

    ip = *a;
    *a = *b;
    *b = ip;
    
} 
