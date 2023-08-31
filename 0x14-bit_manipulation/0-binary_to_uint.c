#include "main.h"
/**
  * binary_to_uint - converts a string of 1's and 0's to a decimal number
  * @b: string to convert
  * Return: unsigned decimal number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result;
	int a;

	result = 0;
	if (b == NULL)
		return (0);
	a = 0;
	while (b[a] != '\0')
	{
		if (b[a] == '0' || b[a] == '1')
		{
			result = result * 2 + (b[a] - '0');
		}
		else
			return (0);
		a++;
	}
	return (result);
}
