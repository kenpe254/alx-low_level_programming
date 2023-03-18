#include <stdio.h>

/**
 *  * main - Entry point
 *   * Description: 'print all possible different combinations of two digits'
 *    * Return: always 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = 1 ; m < 10 ; m++)
		{
			if (n < m && n != m)
			{
				putchar(n + '0');
				putchar(m + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
