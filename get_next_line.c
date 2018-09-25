#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "./libft/libft.h"


int		get_line(const int fd, char *arr, char *line)
{
	int r;
	int i;
	char *buffer;
	
	i = 0;
	buffer = ft_strnew(BUFF_SIZE);
	ft_bzero(buffer, BUFF_SIZE);
	line = ft_strnew(BUFF_SIZE);
	arr = ft_strnew(BUFF_SIZE);
	while ((r = read(fd, buffer, BUFF_SIZE)))
	{
		printf("while loop start\n");
		while (buffer[i])
		{
			printf("while loop 2 starts\n");
			if (buffer[i] == '\n')
			{
				printf("found line\n%d\n", i);
				ft_strncpy(line, buffer, i);
				printf("first copy\n%s\n", line);
				ft_strncpy(arr, buffer, (ft_strlen(buffer) - i));
				printf("copy successfull");
			}
			i++;
		}
	}
	return (r);
}

int		get_next_line(const int fd, char **line)
{
	static char *arr;
	printf("starts\n");
	if (get_line(fd, arr, *line) < 0)
	{
		printf("got line\n");
		return (-1);
	}
	//if (!ft_strchr(*line, '\n'))
	{
	//	printf("no line\n");
	//	return (0);
	}
	return (1);

}

int		main(int ac, char **av)
{
	char *line;
	int fd;
	
	if (ac != 2)
	{
		write (1, "nah\n", 4);
		return (0);
	}
	
	fd = open(av[1], O_RDONLY);
	while (get_next_line(fd, &line) == 1)
	{
		//printf("here");
		printf("Return Line:%s\n", line);
		//free(arr);
	}
	// while (1)
	//;
}
