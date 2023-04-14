#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previouslly allocated
 * @old_size: size, in bytes of the allocated space for ptr
 * @new_size: size, in bytes of the new memory block
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_1;
	char *old_ptr;
	unsigned int a;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
	{
		return (malloc(new_size));
	}
	ptr_1 = malloc(new_size);
	if (!ptr)
	{
		return (NULL);
	}
	old_ptr = ptr;
	if (new_size < old_size)
	{
		for (a = 0; a < new_size; a++)
			ptr_1[a] = old_ptr[a];
	}
	if (new_size > old_size)
	{
		for (a = 0; a < old_size; a++)
			ptr_1[a] = old_ptr[a];
	}
	free(ptr);
	return (ptr_1);
}
