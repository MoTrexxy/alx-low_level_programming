#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - prints all possible different combinations of three digits
* Author: Odeyemi Motunrayo
* Return: 0
*/
int main(void)
{int x = 0;
int y;
int z;
while (x < 8)
{y = x + 1;
while (y < 9)
{z = y + 1;
while (z < 10)
{putchar('0' + x);
putchar('0' + y);
putchar('0' + z);
if (x == 7)
{putchar('\n');
break;
}
putchar(',');
putchar(' ');
z++;
}
y++;
}
x++;
}
return (0);
}


