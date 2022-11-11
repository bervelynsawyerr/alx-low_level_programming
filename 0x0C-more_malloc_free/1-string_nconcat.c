#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - prints concatenate string
 * @s1: input string
 * @s2: input string
 * @n: len s2 string for print
 * Return: This is the string joined
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a, b;
	char *newString;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	if (n > b)
		n = b;
	newString = malloc(((a + n) + 1));
	if (newString == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{
		newString[a] = s1[a];
	}
	for (b = 0; b != n; b++)
	{
		newString[a] = s2[b];
		a++;
	}
	newString[a] = '\0';
	return (newString);
}
