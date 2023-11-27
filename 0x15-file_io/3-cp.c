#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buff(char *fil);
void close_fil(int file_d);

/**
 * create_buff - Function that allocates 1024 bytes for a buffer.
 * @fil: The name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_buff(char *fil)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", fil);
		exit(99);
	}

	return (buffer);
}
