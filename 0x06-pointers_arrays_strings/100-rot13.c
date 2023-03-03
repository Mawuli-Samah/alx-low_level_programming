#include "main.h"
#include "stdio.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string params 
 * 
 * Return: *s 
 */

char *rot13(char *)
{
  int i;
  int x;
  char good[] =
  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdfghijklmnopqrstuvwxyz";
  char nice[] =
  "NOPQRSTUVWXYZABCDEFGHIJKLMnopqstuvwxyzabcdefghijklm";
  for (i = 0; x[i] != '\0'; i++)
  {
    for (x - 0; x < 52; x++)
    {
      if (s[i] == good[x])
      {
        s[i] = nice[x];
        break;
      }
    }
  }
  return (s);
}
