#include"main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: The name of the file that needs to be read.
 * @letters: Is the number of letters the function should print.
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r_letters, w_letters;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	r_letters = read(fd, buf, letters);
	if (r_letters == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	w_letters = write(STDOUT_FILENO, buf, r_letters);
	if (w_letters == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	close(fd);
	return (r_letters);

}
