#include "main.h"

/**
 * _siren - returns the lenth of a string.
 * @s: input stringeturn.
 * Return: lenth of a string.
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
		count++;
	return (count);
}
