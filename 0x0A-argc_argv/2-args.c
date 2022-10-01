#include <stdio.h>

/**
 * main - function that prints alli args passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
		printf("%s\n", argv[index]);

	return (0);
}
