#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit number of basw 10
 * starting from 0, followed by a new line
 * Return: o
 */
int main(void)
{	
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	
        putchar('\n');
        return (0);	
}		
