#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: Argument 1
 * @argv: Argument 2
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int number_of_bytes;
	int z;
	unsigned char *op_codes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	number_of_bytes = atoi(argv[1]);
	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	op_codes = (unsigned char *)main;
	for (z = 0; z < number_of_bytes; z++)
	{
		if (z == number_of_bytes - 1)
		{
			printf("%02hhx\n", op_codes[z]);
			break;
		}
		printf("%02hhx ", op_codes[z]);
	}
	return (0);
}
