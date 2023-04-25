#include "main.h"

/**
 * _strlen - prints length
 * @s: string
 * Return: a
 */

int _strlen(char *s)
{
	int a = 0;

	while (*(s + a))
		a++;

	return (a);
}
