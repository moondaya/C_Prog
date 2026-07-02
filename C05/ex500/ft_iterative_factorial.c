#include <unistd.h>
#include <stdio.h>
// remember write() can not display int direcly.
int	ft_iterative_factorial(int nb)
{
	int	fac;
	
	fac = 1;
	if (nb == 0 || nb == 1)
		return(1);
	if(nb < 0)
		return(0);
	

	while(nb > 1)
	{
		fac = fac * nb;
		nb--;
	}
	
	//write(1, &fac , 4); //  remember write() can not write int directly
	//printf("\n here is %d \n", fac);
return(fac);
}
// not necessary function just for argumentative usage required. char input to convert int.
int	fatoi(char* str)
{

	int	nba;
	int	sg;
	
	sg = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if(*str == '-')
		{ 
			sg = -sg;
		}
	str++;
	}
	nba =  0;
	while(*str != '\0' && *str <= '9' && *str >= '0')
	{
		nba = (nba * 10) + (*str - '0');
		str++;
	}
return(nba * sg);
}
void	fputnbr(int n)
{
	long nb;
	char c;

	nb = n;
	if (nb < 0)
	{
		write(1,"-",1);
		nb = -nb;
	}

	if (nb >= 10)
	{
		fputnbr(nb / 10);
	}
	c = (nb % 10) + '0';
	write(1, &c, 1);
}

int	main(int argc, char* argv[])
{
	int	a;
	int 	b;
	if (argc != 2)
	{
		write(1, "Error: Please provide one number.\n", 34);
	return(0);
	}
	write(1, "factorial is: ", 14); 
	a = fatoi(argv[1]); // convert to string to integer
	b = ft_iterative_factorial(a);
	//write(1, "\n", 1) can not display integer therefore fputnbr is required to display instead of printf
	fputnbr(b);
	printf("\n check: %d \n", b);
return(0);
}
