#include <stdio.h>
/**
 * swap_int -swap the values of two integers.
 * @a: the first intege to be swapped.
 * @b: the second integer to be swapped
 *
 * Return: nothing 
 */
void swap_int (int *a, int *b)
	/* the function that swaps the value of two unteger. */
{ 
	int temp = *a;
	*a = *b;
	*b = temp;
}
