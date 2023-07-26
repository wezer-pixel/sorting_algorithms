#include "sort.h"

/**
 * swap - swaps two numbers
 * @a: first number
 * @b: second number
 *
 * Return: void
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - algorithm to sort numbers in ascending order
 * @array: array of int to be sorted
 * @size: size of the array
 *
 * Return: a sorted list
 */

void bubble_sort(int *array, size_t size)
{
	int swapped;
	size_t i, j, k;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j], array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
		printf("%zu ", i + 1);

		for (k = 0; k < size; k++)
			printf("%d ", array[k]);
		printf("\n");
	}
}
