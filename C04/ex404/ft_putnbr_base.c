#include <unistd.h>
#include <stdio.h>

void	ftputchar(char* str)
{
	while(*str != '\0')
	{
		write(1,str,1);
	str++;
	}
}

int ftcnt(char *basecn)
{
	int	cnt;

	cnt = 0;
	while(basecn[cnt] != '\0')
		cnt++;

	return (cnt);
}

int	checkfunc(char *base)
{
	int	i;
	int 	j;

	i = 0;
	if(base[0] == '\0' || base[1] == '\0')
	{
		ftputchar("invalid argument");
		return(0);
	}
	while (base[i] != '\0')
	{	if (base[i] == '+' || base[i] == '-' || base[i] == 127 || base[i] <=32)
		{	ftputchar(" invalid argument");
			return (0);
		}
		j = i + 1;
		while (base[j] !=  '\0')
		{ 
			if (base[i] == base [j])
			{	
				ftputchar("invalid argument");
				return(0);
			}
		j++;
		}
	i++;
	}
return (1);
}

//nbrw number input
//basecntw lenght of base
void	ft_putnbr_basew(int nbrw, char* basew, int basecntw)
{
	if (nbrw >= basecntw)
	{
		ft_putnbr_basew((nbrw/basecntw), basew, basecntw);
	}
write(1, &basew[nbrw % basecntw], 1);
//return;
}

//nbr type changed to long considering the memory.
//lg length of base.
void	ft_putnbr_base(int nbr, char *base)
{
	//checkfunc(base);
	int	lg;
	long 	nbrl;
	
	if (checkfunc(base) == 0)
		return;
	lg = ftcnt(base);
	nbrl = nbr;
	if (nbrl < 0)
	{
		nbrl = -nbrl;
		write(1, "-", 1);
		//ftputchar("-"); do not use those terms as it is string output style
	}
	
	ft_putnbr_basew(nbrl, base, lg);
}

//below function is for argv argc function usage.
//notcvt is convert the sting input to integer.
//not an obligotary input number can be written in the main functions
int ftaoi(char* str)
{
	int	nocvt;

	nocvt = 0;
	while (*str != '\0')
	{
		nocvt = (10 * nocvt) + (*str - '0');
	str++;
	}
return(nocvt);

}


int	main(int argc, char *argv[])
{
	int 	basecvt;

	basecvt = 0;
	if (argc != 3)
		return(printf("\n %s \n", "not valid input"));

	basecvt = ftaoi(argv[1]);
	//printf("\n basecvt is  %d \n", basecvt);

	ft_putnbr_base(basecvt, argv[2]);
return (0);
}


