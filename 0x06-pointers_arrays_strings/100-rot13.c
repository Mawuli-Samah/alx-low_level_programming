#include "main.h"
#include "stdio.h"

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string params 
 * 
 * Return: *s 
 */

char *rot13(char *s)
{
  int i;
  int j;
  char good[] =
  "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdfghijklmnopqrstuvwxyz";
  char nice[] =
  "NOPQRSTUVWXYZABCDEFGHIJKLMnopqstuvwxyzabcdefghijklm";
  for (i = 0; j[i] != '\0'; i++)
  {
    for (j - 0; j < 52; j++)
    {
      if (s[i] == good[j])
      {
        s[i] = nice[j];
        break;
      }
    }
  }
  return (s);
}
