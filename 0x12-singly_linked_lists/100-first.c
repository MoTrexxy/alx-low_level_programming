#include <stdio.h>

void first(void) __attribute__ ((constructor)) ht(void);

/**
 * ht - funct that prints a string before the main funct is executed
 */
void ht(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
