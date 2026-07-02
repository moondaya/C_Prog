#include <unistd.h>
#include <stdio.h>

int ft_iterative_power(int nb, int power)
{
	int	a;

	a = nb;
	if(power < 0 )
		return(0);
	if (nb == 0 && power == 0)
		return(1);

	while(power > 1)
	{
		nb = nb * a;
		--power;
	}	
return(nb);
}


// necessart to convert string to int for the function.
int	fatoi(char* str)
{
	int	sg;
	int	nb;

	nb = 0;
	sg = 1;
	while(*str < 13 && *str > 9 || *str == ' ')
		str++;
	while(*str == '-' || *str == '+')
	{
		if(*str == '-')
			sg = -sg;
	str++;
	}
	while(*str <= '9' && *str >= '0' || *str != '\0')
	{
		nb = (nb * 10) + (*str - '0');
	str++;
	}
return(sg * nb);

}

// necessary to write down integer
void	fputnbr(int nbr)
{
	char	ptch;
		
	if(nbr < 0)
	{
		nbr = - nbr;
		write(1, "-", 1);
	}
	if (nbr > 9)
	{
		fputnbr(nbr / 10);
	}
	ptch = ((nbr % 10) + '0');
	write(1, &ptch, 1);
}
/*
int	main(void)
{
	int	res;

	res = ft_iterative_power(3 , 4);
	printf("\n %d ", res);
return(0);
}

*/
int	main(int argc, char* argv[])
{
	int	invar;
	int	inpwr;
	int	res;

	res = 0;
	inpwr = 0;
	invar = 0;
	if (argc != 3)
	{
		printf("/n %s ", "invalid argument");
		return(0);
	}
	invar = fatoi(argv[1]);
	//printf("\n var = %d ", invar);
	inpwr = fatoi(argv[2]);
	//printf(" \n pwr = %d ", inpwr);
	res = ft_iterative_power(invar, inpwr);
	fputnbr(res);
        //printf("\n  here %d ", res);
return(0);
}

