#include <stdio.h>
/**
 * _strlen - Return the length of a string.
 * @str: The to get the length of
 * Retun: the length of @str
 */

size_t _strlen(const char *str)
{
	size_t length  = 0;

	while (*str++)
	length++;
	return (length);
}
