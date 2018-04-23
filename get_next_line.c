#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"
#include "./qponcele/libft.h"

int		get_next_line(const int fd, char **line)
{
	int i;
	int c;
	static char *arr[5000];
	char *buffer;
	char *tmp;

	i = 0;
	c = 0;
	buffer = ft_strnew(BUFF_SIZE);
	ft_bzero(buffer, BUFF_SIZE);
	while ((c = read(fd, buffer, BUFF_SIZE)) > 0)
	{
		if (!arr[fd])
			arr[fd] = strdup(buffer);
		if (!ft_strchr(arr[fd], '\n'))
		{
		  //printf("start:%s\n", *line);

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
	*line = ft_strtrim(arr[fd]);
	return (1);
}

int		main()
{
	char *arr;
	int fd;

	fd = open("test.txt", O_RDONLY);
	get_next_line(fd, &arr);
	printf("%s", arr);
}
