#include "main.h"

/**
* _puts_recursion - a function that print a string
* @s: a string
* Return: 0
*/ void _puts_recursion(char *s)
{
    if (*s == '\0') 
    {
        putchar('\n');
        return;
    }
    putchar(*s);
    _puts_recursion(s+1);
}
