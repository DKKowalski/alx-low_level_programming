#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: the minimum value to start the array
 * @max: the maximum value to end the array
 *
 * Return: On success, a pointer to the newly created array
 *         On failure, NULL
 *         If min > max, return NULL
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	ptr = malloc(len * sizeof(int));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = min + i;

	return (ptr);
}

