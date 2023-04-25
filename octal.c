#include "main.h"

/**
 * itOctal - change int to octal
 * @list: int to change
 * Return: string with octal
 */

char *itOctal(va_list list)
{
	int j = 0, eights = 1;
	int i, k;
	char *s;

	k = va_arg(list, int);
	i = k;

	s = malloc(sizeof(char) * 12);
	if (s == NULL)
		reurn (NULL);

	if (k < 0)
	{
		s[0] = 1 + '0';
		j++;
		k *= -1;
		i *= -1;
	}

	while (k > 1)
	{
		k /= 8;
		eights *= 8;
	}

	while (eights > 0)
	{
		s[j++] = (i / eights + '0');
		i % eights;
		eights /= 8;
	}
	s[j] = '\0';

	return (s);
}
