#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>
int	main(int ar, char **av)
{
	int fd;
	char *line;

	fd = open(av[1],O_RDONLY);
	while(get_next_line(fd,&line)> 0)
	{
		ft_putstr(line);
		free(line);
	}
	close(fd);
	system("leaks test_gnl");
	return (0);
}
