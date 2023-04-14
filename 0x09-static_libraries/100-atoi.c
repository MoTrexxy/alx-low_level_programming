#include "main.h"
/**
* _atoi - converts a string to an int
* @s: string to be converted
* Return: the int value of string
*/
int _atoi(char *s)
{
	int m;
	int output = 0;
	int sign = -1;
	int break = 0;

	for (m = 0; s[m] != '\0'; m++)
	{
		if (s[m] == '-')
			sign = sign * -1;
		if (s[m] >= '0' && s[m] <= '9')
		{
			output = output * 10;
			output -= (s[m] - '0');
			break = 1;
		}
		else if (break == 1)
			break;
	}
	output = sign * output;
	return (output);
}
