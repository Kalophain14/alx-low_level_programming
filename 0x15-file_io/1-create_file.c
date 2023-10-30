#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * _strlen - Returns the length of a string.
 * @s: The string whose length will be returned.
 * Return: The length of s.
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}

/**
 * create_file - Creates a file and writes content to it.
 * @filename: The filename.
 * @text_content: The content to write to the file.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = _strlen(text_content);

	if (!filename)
		return (-1);
	/**Open, create with read & write permission if doesnt exit*/
	fd = open(filename, O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		if (write(fd, text_content, len) == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
return (1);
}
