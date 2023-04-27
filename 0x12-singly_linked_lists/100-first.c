#include <stdio.h>

void __attribute__((constructor)) ht(void);

/**
 * ht - a funct that prints a string before the
 *        main funct is executed.
 */
void ht(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
