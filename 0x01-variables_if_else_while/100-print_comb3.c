#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - print all possible different combinations of two digits
* Author: Odeyemi Motunrayo
* Return: 0
*/
int main(void)
{int num2 = 0;
int num2;
while (num2 < 9)
{num2 = num2 + 1;
while (num2 < 10)
{putchar('0' + num2);
putchar('0' + num2);
if (num2 == 8)
{putchar('\n');
break;
}
putchar(',');
putchar(',');
num2++;
}
num2++;
}
return (0);
}
