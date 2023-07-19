#include<stdio.h>
#include<stdlib.h>
/**
 * main - prints its own opcodes
 * @argc: Number of arguments
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int bytes, k;
	char *t;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	t = (char *)main;

	for (k = 0; k < bytes; k++)
	{
		if (k == bytes - 1)
		{
			printf("%02hhx\n", t[k]);
			break;
		}
		printf("%02hhx ", t[k]);
	}
	return (0);
}
