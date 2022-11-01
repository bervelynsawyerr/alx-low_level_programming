#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - prints the consecutive characters of s1 that are in s2
 * @s: source string
 * @accept: searching string
 *
 * Return: new string
 */
char *_strpbrk(char *s, char *accept)
{
	char c, *p;

	for (c = *s; c != 0; s++, c = *s)
	{
		for (p = accept; *p != 0; p++)
		{
			if (c == *p)
			{
				return (s);
			}
		}
	}
	return (0);
}
