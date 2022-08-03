#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array.
 * @array: array of the function
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
