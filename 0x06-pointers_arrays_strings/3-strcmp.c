#include "main.h"

/**
 * _strcmp - a function that compares two strings
 * @s1: pointer for first string
 * @s2: pointer for second string
 * Return: return difference if any
 * If the return value is less than 0, it means s1 is less than s2
 * If the return value is greater than 0, it means s1 is greater than s2
 * If the return value is 0, it means s1 is equal to s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
}
