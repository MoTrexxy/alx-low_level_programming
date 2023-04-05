#include "main.h"

/**
* _strlen_recursion - function that returns the length of a string
* @s: s is a string that the length would be returned to
* Return: length of the string to s
*/
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
	return (1 + _strlen_recursion(s + 1));
	}
	else
	{
	return (0);
	}
}
