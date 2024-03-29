#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - a function that allocates memory
* @b: an int that is the size of the memory to be allocated
*
* Description: exit with a status of 98 if it fails
* Return: the pointer to the allocated memory or a exit of 98
*/

void *malloc_checked(unsigned int b)
{
	int *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	return (pointer);
}
