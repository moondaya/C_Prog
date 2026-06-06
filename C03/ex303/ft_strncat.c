#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	cnt(char *str)
{
	unsigned int	cnt;
	
	cnt = 0;
	while(*str)
	{
		cnt++;
	str++;		
	}
return (cnt);
}


char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	cntm;


	i = 0;
	cntm = cnt(dest);

	if  (nb == 0)
		return (0);
	while (i < nb && src[i] != '\0')
	{
		dest[cntm + i] = src[i];
		i++;
	}
	dest[cntm + i] = '\0';
return (dest);
}

int	main (int argc, char *argv[])
{
	unsigned int 	n;
	char *	replace;

	n = 4;
	replace = argv[1]; // this not prevent for memory problem. it only stores memory location not new memory. Therefore org func still wil lnot be the same
	if (argc > 3)
		return (0);

	printf("\n here is text %s \n ", ft_strncat(argv[1] , argv[2], n));

	printf("\n here org %s \n", strncat(replace, argv[2], n)); 

	return (0);
}

