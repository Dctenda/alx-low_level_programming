#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints numbers between 0 to 9 with spaces and comma.
 *
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i=48; i < 58;i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		
		putchar ('\n');
		return (0);
         }
		

}
