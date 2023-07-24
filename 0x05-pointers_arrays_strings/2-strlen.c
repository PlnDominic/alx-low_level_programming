#include "main.h"
/**
  * _strlen - print the length of a string
  * @s: argument to get length of
  * Return: length
  */
int _strlen(char *s)
{
int lengthOfString = 0;
while (*s != 0)
{
lengthOfString++;
s++;
}
return (lengthOfString);
}
