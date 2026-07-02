#include <unistd.h>
#include <stdio.h>
int	ft_recursive_factorial(int nb)
{
	int	i;

	if( nb < 0) 
		return(0);
	if(nb == 0 || nb == 1)
		return(1);

return(nb * ft_recursive_factorial((nb - 1)));
}
// required to screen entry input. not obligation
int fatio(char* str)
{
	int	sg;
	int	c;
	
	sg = 1;
	while(*str == ' ' || (*str <= 13 && *str >= 9))
			str++;
	while (*str == '+' || *str == '-')
		if (*str == '-')
		{	
			sg = -sg;
			//write(1, "-", 1);
		str++;
		}
	c = 0;
	while (*str >= '1' && *str <= '9')
	{
	c = (10 * c) + (*str - '0');	
	str++;
	}

return(sg * c);
}
//return function is integer and can be written by write func . therefore fputnbr are used. 
void	fputnbr(int nb)
{
	char	s;

	if (nb < 0)
	{	
		nb = -nb;
		write(1, "-", 1);
	}

	if(nb >= 10)
	{
		fputnbr(nb / 10);
	}	
	
	s = (nb % 10) + '0';
	write(1, &s, 1);
}


int	main(int argc, char* argv[])
{
	int val;
	int des;

	val = fatio(argv[1]);
	des = ft_recursive_factorial(val);
	write(1, "w fput factorial is ", 20);
	fputnbr(des);
	printf("\n %d \n", des); 
return(0);
}
/*
int	main(void)
{
	int	a;

	a = ft_recursive_factorial(5);

	printf("\n here is %d", a);
return(0);

}
*/
