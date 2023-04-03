#include "main.h"

/**
 * _memset - function fills the first n bytes
 * @s: pointer to the memory area to be filled
 * @b: constant byte to fill the memory area with
 * @n: number of bytes to fill
 * Return: returns pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
        unsigned int i = 0;
        char *mot = s;

        while (n > i)
        {
                *mot = b;
                i++;
                mot++;
        }

        return (s);
}
