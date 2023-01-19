#include "function_pointers.h"
/**
 * int_index - searches for an integer
 *
 * @array: pointer to an int array
 * @size: number of elements in the array 'array'
 * @cmp: pointer to a function that receives an int
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int elements;
	int index;

	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		/* run through the array with variable elements */
		for (elements = 0; elements < size; elements++)
		{
			/* the index variable will be equal to *cmp */
			index = cmp(array[elements]);
			/* condition if there is coincidence return int */
			if (index > 0)
				return (elements);
		}
	}
	/* if there is no coincidence will return -1 or if cmp array are NULL */
	return (-1);
}
