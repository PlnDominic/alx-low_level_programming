#include "main.h"
/**
 * _abs - Prints the absolute value of an integer
 *
 * @a: variable to check
 *
 * Return: Return the absolute value
 */
int _abs(int a)
{
	if (a < 0)
	{
		int b;

		b = a * -1;

		return (b);
	}
	return (a);
}
