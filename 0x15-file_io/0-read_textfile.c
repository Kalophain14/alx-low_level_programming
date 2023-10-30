#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - Reads a text file to the POSIX standard output.
 * @filename: The filename to read.
 * @letters: The number of letters to read and print.
 * Return: number of letters it could read
 *         runs well. 0 otherwise.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t read_size = 0;

	if (!filename)
		return (0);

	/**Open the file for reading*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	/**Allocate memory for the buffer*/
	buffer = malloc(letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}
	/**Read and print the file*/
	read_size = read(fd, buffer, letters);
	if (read_size == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}
	/**Close the file*/
	close(fd);

	/**Null-terminate the buffer to make it a valid string*/
	buffer[read_size] = '\0';

	/**Printto standard output*/
	write(1, buffer, read_size);
	free(buffer);

/**Return the number of letters read and printed*/
return (read_size);
}

