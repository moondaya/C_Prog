#include <unistd.h>
#include <stdio.h>
// remember write() can not display int direcly.
int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fac;
	int*	wr;

	i = 1;
	fac = nb;
	
	if (nb == 0)
		return(1);
	if(nb < 0)
		return(0);
	

	while(nb - i > 1)
	{
		fac = fac * (nb - i);
		i++;
	//printf("\n fac is inloop %d \n ", fac);
	}
	wr = &fac;
	write(1, wr, 4); //  remember write() can not write int directly
	printf("\n here is %d \n", fac);
return(fac);
}

int	fatoi(char* str)
{

	int	nba;
	
	nba = 0;
	while(*str != '\0')
	{
	nba = (nba * 10) + (*str - '0');
	str++;
	}
return(nba);
}

int	main(int argc, char* argv[])
{
	int	a;

	a = fatoi(argv[1]); 
	ft_iterative_factorial(a);
	//ft_iterative_factorial(a);
return(0);
}
/*
int	main(void)
{
	int	a;

	a = 6;
	ft_iterative_factorial(a);
return(0);
}
*/
