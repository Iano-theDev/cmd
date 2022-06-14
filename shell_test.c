#include <stdio.h>
#include "main.h"
/* main - print _putchar
 * Description: add a new line after printing.
 * Return: 0 on success
 */

int main(void)
{
	char p[8] = "putchar";
    	int i;

     	i=0;

    	while (i<=8)
    	{
	       	putchar(p[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
