#include "main.h"

/**
* _isalpha - checks if a character is alphabetic
* @c: the character to check
* Return: if c is a letter, else return 0
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
