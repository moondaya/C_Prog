#include <unistd.h>
#include <stdio.h>

// isspace func check for space(32), from 9 to 13.
int	ft_atoi(char *str)
{
	int	sg;
	int	nb;

	sg = 1;
	nb = 0;
	if (*str == '\0')
		return (0);
// isspace characters are ''space, \t horz. tab, \n newline,
// \f feed, \r carriage return. \v vertical tab
// isspace works, if char is white space char, return non-zero
// if char is non white space func returns zero
	while (*str >= 9 && *str <= 13 || *str == 32)
		str++;
	while(*str == '-' || *str == '+')
	{
		if(*str == '-')
			sg = -sg;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = (10 * nb) + (*str - '0');
		str++;
	}
return (sg * nb);
}


int	main(int argc, char* argv[])
{
	int	a;

	a = 0;
	if (argc != 2)
		return (printf("\n %s \n", "not correct input"));
	printf(" \n %d \n",ft_atoi(argv[1]));
return (0);
}

