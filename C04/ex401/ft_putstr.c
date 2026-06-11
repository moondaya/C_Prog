#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
	str++;
	}
}

int	main (int argc, char* argv[])
{
	if (argc != 2)
		printf("\n %s \n", " not correct input");
	ft_putstr(argv[1]);
return(0);
}
