#include "function_pointers.h"

/**
 * array_iterator - executes given function
 * parameter on each element of an arrary.
 * @array: input integer array.
 * @size: size of array
 * @action: function pointer
 *
 * Return: Always 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
