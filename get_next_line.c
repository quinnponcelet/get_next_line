#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "./libft/libft.h"

int		get_line(const int fd, char **arr)
{
	char buff[BUFF_SIZE + 1];
	int r;
	
	r = 1;
	//printf("broke\n");
	while (!ft_strchr(*arr, '\n') && r > 0)
	{
		//printf("very nice\n");
		r = read(fd, buff, BUFF_SIZE);
		//printf("broke2\n");
		buff[r] = '\0';
		*arr = ft_strjoin(*arr, buff);
		//printf("joined\n%s\n", *arr);
	}
	//printf("finished\n");
	return (r);
}


int		get_next_line(const int fd, char **line)
{
	static char *arr;
	char		*tmp;
	int			r;
	
	if (!arr)
		arr = ft_strnew(BUFF_SIZE);
	if (!line || fd < 0 || BUFF_SIZE < 0 || -1 == read(fd, arr, 0))
	{
		printf("failed\n");
		return (-1);
	}
	if (get_line(fd, &arr) < 0)
	{
		printf("read failed\n");
		return (-1);
	}
	//printf("%s\n", arr);
	if ((tmp = ft_strchr(arr, '\n')))
	{
		//printf("weird\n");
		*tmp = '\0';
		tmp++;
		*line = ft_strdup(arr);
		arr = ft_strdup(tmp);
		//printf("success\n");
		return (1);
	}
	*line = ft_strdup(arr);
	return (0);
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
		printf("Return Line:%s\n", line);
	//while (1);
}


/*int		get_line1(const int fd, char *arr, char *line)
{
	int r;
	int i;
	char buffer[BUFF_SIZE + 1];
	char *tmp;
	
	i = 0;
	//line = ft_strnew(BUFF_SIZE);
	//ft_bzero(line, BUFF_SIZE);
	//printf("bzero check2\n");
	//if (!arr)
	//	arr = ft_strnew(BUFF_SIZE);
	//printf("arr check\n");
	while ((r = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		printf("while loop start\n");
		if (!line)
		{
			printf("this should happen once");
			line = ft_strdup(buffer);
		}
			
		if (tmp == ft_strchr(buffer, '\n'))
		{
			printf("strchr\n");
			*tmp = '\0';
			tmp++;
			line = ft_strdup(buffer);
			arr = ft_strdup(tmp);
			return (1);
		}
		else
		{
			printf("join\n");
			line = ft_strjoin(arr, line);
			printf("%s", line);
		}

	//	printf("duptest\n%s\n", buffer);
	//	line = ft_strdup(buffer);
		
	}
	return (r);
	//ft_bzero(buffer, BUFF_SIZE);
	//printf("bzero check\n");
}

int		linechecker(char *line, char *buff, char *arr, int c)
{
	char *tmp;

	if (tmp == ft_strchr(buff, '\n'))
	{
		*tmp = '\0';
		tmp++;
		line = ft_strdup(buffer);
		arr = ft_strdup(tmp);
		return (1);
	}
*/
