#include "holberton.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of intergers.
 * @a: input array.
 * @n: input n elements
 * Return - no return.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < 10; i++)
	{
		printf("%d", *(a + i));
	if (i != (n - 1))
		       printf(", ");
	}
	printf("\n");
}	
