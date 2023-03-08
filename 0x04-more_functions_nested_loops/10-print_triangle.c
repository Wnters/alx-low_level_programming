#include "main.h"

/**
* print_triangle - prints a triangle, followed by a new line
* @size: size of the triangle
*/
void print_triangle(int size)
{
	if (size <= 0)
	{
		printf('\n');
	}
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				printf(' ');
			}

			for (j = 1; j <= i; j++)
			{
				printf('#');
			}

			printf('\n');
		}
	}
}

/**
 * main - check the code
 * 
 * Return: Always 0
 */
int main()
{
	print_triangle(2);
	print_triangle(10);
	print_triangle(1);
	print_triangle(0);
	return (0);
}
