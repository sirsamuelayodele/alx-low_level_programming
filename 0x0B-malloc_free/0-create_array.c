#include "main.h"

/*
 * create_array - create an array of char and
 * initialize it with a specific char
 * @size: size of the array
 * @c: character to insert
 * Return: null if the size is zero or if it fails
 * pointer to array if everything runs successfully
 */

char *create_array(unsigned int size, char c);
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);
	aray = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = o; index < size; index++)
		array[index] = c;

	return (array);
}
