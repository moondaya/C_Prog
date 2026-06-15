#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char n;
	
	if (nb == -2147483648)
	{
		write(1,"-2147483648",11);
		return; // NO ZERO, func return is VOID!!!!
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
	}
	if (nb >= 10)
	{
		ft_putnbr(nb/10);
	}
	n = (nb % 10 ) + '0';
	write(1,&n, 1);
	// shorter way is write(1, (char[]){(nb % 10) + '0'}, 1); but NOT RECOMENDED for common approach. 
}
int main(void)
{
	int sd;

	sd = -3929;
	ft_putnbr(sd);
return (0);
}




/* there is problem in below way. input putnbr is int but the input in main below is  char. so conflict occurs.
// need to change the type which is another ex subject. 
int	main(int argc, char *argv[])
{
	if(argc != 2)
		printf("\n %s \n", "not correct input");
	putnbr(argv[1]);
return (0);
}
*/


