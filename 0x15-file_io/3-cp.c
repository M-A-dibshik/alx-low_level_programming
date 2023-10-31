#include "main.h"

/**
 * main - program
 * @ac: argument count
 * @av: argument vector
 * Return: 1 on success and -1 on failure
*/

int main(int ac, char **av)
{
	int from_fd = 0, to_fd = 0;
	ssize_t b, w;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	int fd_from = open(av[1], O_RDONLY);

	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	int fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((b = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, b);
		if (w == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (b == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	from_fd = close(from_fd);
	to_fd = close(to_fd);
	if (from_fd)
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", from_fd), exit(100);
	if (to_fd)
		dprintf(STDERR_FILENO, "Error: can't close fd %d\n", from_fd), exit(100);

	return (1);
}
