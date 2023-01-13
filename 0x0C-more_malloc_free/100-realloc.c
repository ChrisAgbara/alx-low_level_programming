#include "main.h"
#include <stdlib.h>

/**
* copyit- a helper function that copies a string
* @ptr: a pointer. the original array
* @pointer: the new pointer
* @old_size: the size of the old pointer
*
* Description: copies the old pointer into the new pointer
* Return: void.
*/

void copyit(char *ptr, char *pointer, int old_size)
{
	if (old_size)
	{
		*pointer = *ptr;
		copyit(ptr + 1, pointer + 1, old_size - 1);
	}
}

/**
* _realloc - write a function that reallocates a memory
* @ptr: old pointer
* @old_size: the old size of the memory
* @new_size: the new size of the memory
*
* Description: copy
* Return: returns the pointer or null
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *pointer;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size || ptr != NULL)
	{
		pointer = malloc(new_size);
		if (!pointer)
			return (NULL);
		copyit(ptr, pointer, old_size);
	}
	free(ptr);
	return (pointer);
}
