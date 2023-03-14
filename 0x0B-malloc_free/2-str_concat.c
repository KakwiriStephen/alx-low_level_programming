#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - Will concatenate two strings
 * @s1: The string to concatenate
 * @s2: The second string to concatenate
 *
 * Return: The pointer to the new string, otherwise NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int a = 0, b = 0, len = 0, len1 = 0;

	while (s1 && s1[len])
		len++;
	while (s2 && s2[len1])
		len1++;

	s3 = malloc(sizeof(char) * (len + len1 + 1));
	if (s3 == NULL)
		return (NULL);

	a = 0;
	b = 0;

	if (s1)
	{
		while (a < len)
		{
			s3[a] = s1[a];
			a++;
		}
	}
	if (s2)
	{
		while (a < (len + len1))
		{
			s3[a] = s2[b];
			a++;
			b++;
		}
	}
	s3[a] = '\0';

	return (s3);
}
