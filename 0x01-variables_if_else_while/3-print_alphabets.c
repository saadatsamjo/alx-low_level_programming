#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>

/**
 *main - Print the alfabet
 *
 *Return: Always (Success)
 */
int main(void)
{char i;
	for (i = 'a'; i <= 'z'; i++)
{
	putchar(i);
	putchar(toupper(i))
}
putchar ('\n');
return (0);
}
