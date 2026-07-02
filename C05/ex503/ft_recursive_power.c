#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if( nb == 0 && power == 0 || power == 0) 
		return(1);
	
	if( power == 1)
		return(nb);
return(nb * ft_recursive_power(nb, (power - 1)));
}

int	fatoi(char* str)
{
	int	sg;
	int	nbr;

	nbr = 0;
	sg = 1;
	while(*str < 13 && *str > 9 || *str == ' ')
		str++;
	while(*str == '-' || *str == '+')
	{
		if (*str == '-')
		{
			sg = -sg;
		}
	str++;
	}
	while( *str >= '0' && *str <= '9' || *str != '\0')
	{
		nbr = (nbr * 10) + (*str - '0');
	str++;
	}
return(nbr * sg);
}

void	fputnbr(int nbra)
{
	char wrnbr;

	if(nbra == ' ')
		write(1, "wrong no", 9);
	if(nbra < 0)
	{	
		write(1, "-", 1);
		nbra = -nbra;
	}
	if(nbra > 9)
	{
		fputnbr(nbra / 10);
	}
	wrnbr = ((nbra % 10) + '0');
	write(1, &wrnbr, 1);
}


int	main(int argc, char* argv[])
{
	int	arnb;
	int	arpower;
	int	res;


	if(argc != 3)
		write(1, "wrong input", 11);
	
		
	arnb = fatoi(argv[1]);
	arpower = fatoi(argv[2]);
	res = ft_recursive_power(arnb, arpower);
	fputnbr(res);
	printf("\n  res is %d ", res);
return(0);
}
