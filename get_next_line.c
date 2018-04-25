#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "./libft/libft.h"

int		get_buff(const int fd, char *arr[5000])
{
	int c;
	char *buffer;
	char *tmp;

	buffer = ft_strnew(BUFF_SIZE);
	ft_bzero(buffer, BUFF_SIZE);
	while ((c = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		if (!arr[fd])
			arr[fd] = strdup(buffer);
		else
		{
			tmp = arr[fd];
			//printf("pointer:%s\n", *line);
			arr[fd] = ft_strjoin(arr[fd], buffer);
			//ft_strtrim(arr[fd]);
			//printf("joined:%s\n", *line);
			ft_strdel(&tmp);
		}
		ft_bzero(buffer, BUFF_SIZE);
		//line = &buffer;
	}
	ft_strdel(&buffer);
	return (c);
}

int	get_next_line(const int fd, char **line)
{
	static char *arr[5000];
	char *tmp;
	int i;

	i = 0;
	if (get_buff(fd, arr) < 0)
		return (-1);
	while (arr[fd][i] && arr[fd][i] != '\n')
		i++;
	/*if (line != NULL && *line)
	  {
	    ft_strdel(line);
	    //	    printf("reee");
	  }*/
//	*line = ft_strsub(arr[fd], 0, i);
	if (!ft_strchr(arr[fd], '\n'))
	{
		printf("arr[fd]:%s\nline:%s\n", arr[fd], *line);
		ft_bzero(arr[fd], ft_strlen(*line));
		return (0);
	}
	else
	{	
		//tmp = arr[fd];
		*line = arr[fd];
		arr[fd] = ft_strchr(arr[fd], '\n');
		*arr[fd] = '\0';
		//tmp[i] = '\0';
	
		arr[fd]++;
	//	printf("temp:\n%s\narr[fd]:\n%s\n", tmp, arr[fd]);
		/*if (*tmp)
		  {
		*/   
		//printf("here\n");
		//ft_bzero(tmp, i);
//		ft_strdel(&tmp);
	}
	return (1);
}

int		main(int ac, char **av)
{
	char *arr;
	int fd;
	if (ac != 2)
	{
		write (1, "nope\n", 5);
		return (0);
	}
	

	
	fd = open(av[1], O_RDONLY);
	while (get_next_line(fd, &arr) == 1)
	{
		printf("%s\n", arr);
		//free(arr);
	}
	while (1)
	;
}
