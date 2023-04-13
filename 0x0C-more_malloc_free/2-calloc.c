#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array
 * of nmemb elements of size bytes each,
 * and returns a pointer to the allocated memory. The memory is set to zero.
 *
 * @nmemb: Number of elements.
 * @size: Size of each element.
 *
 * Return: Pointer to the allocated memory, or NULL on failure.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;

if (nmemb == 0 || size == 0)
{
return (NULL);
}

ptr = malloc(nmemb * size);

if (ptr == NULL)
{
return (NULL);
}

memset(ptr, 0, nmemb * size);
return (ptr);
}

