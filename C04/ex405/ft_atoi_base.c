#include <unistd.h>
#include <stdio.h>

int	cnt(char *str)
{
	int	cnt;

	cnt = 0;
	while(str[cnt] != '\0')
		cnt++;
return(cnt);
}

void	fputstr(char *str)
{	
	int	wr;
	write(1, "\n", 1);
	wr = 0;
	while(str[wr] != '\0')
	{
		write(1, &str[wr], 1);
		wr++;
	}
}

int	chckfunc(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
	{	
		fputstr("invalid base\n");
		return(0);
	}
	while( base[i] != '\0')
	{
		if (base [i] == '+' || base[i] == '-' || base[i] <= 32)
		{
			fputstr("invalid base\n");
			return(0);
		}
		j = i + 1;
		while(base[j] != '\0')
		{
			if (base[i] == base[j])
			{	
				fputstr("invalid base\n");
				return(0);
			}
			j++;
		}
		i++;
	}
	return(1);
}

void 	putbase(int nom, char* base, int basesize)
{
	long	nomb;

	nomb = nom;
	if (nomb < 0)
	{
		nomb = -nomb;
	}
	if(nomb >= basesize)
	{
		putbase(nomb / basesize, base, basesize);
	}
write(1, &base[nomb % basesize], 1);

}


int	ft_atoi_base(char *str, char* base)
{
	int	lg;
	int	sg;
	int	nom;

	lg = 0;
	sg = 1;
	nom = 0;
	if(chckfunc(base) == 0)
	{
		//fputstr("invalid base");
		return(0);
	}	
	lg = cnt(base);

	while(*str != ' ' && (*str <= 13 || *str >= '9') )
		str++;
	while (*str == '+' || *str == '-')
	{
		if(*str == '-')
			sg = -sg;
		str++;
	}

	while ( *str <= '9' && *str >= '0' && *str != '\0')
	{
		nom = (nom *10) + (*str - '0');
	str++;
	}
	if((nom * sg) < 0)
		write(1, "-", 1);
	putbase((nom * sg), base, lg);
return (0);
}

int	main(int argc, char* argv[])
{
	ft_atoi_base(argv[1], argv [2]);

return(0);
}


