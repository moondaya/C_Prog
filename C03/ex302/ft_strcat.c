#include <unistd.h>
#include <stdio.h>
#include <string.h>

// add func. for lenghe calculation. 
int cnt(char *str)
{
	int cnt;

	cnt = 0;
	while (*str)
	{
		cnt++;
		str++;
	}
return (cnt);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	leng;

	i = 0;
	leng = cnt(dest);// do not add in the loop as dest leng changes
	//printf(" \n check point no: %d ",cnt(dest));
	while (src[i] != '\0')
	{	
		dest[leng + i] = src[i];
		i++;
//	printf(" \n check while L %d %s \n: ", i, dest); 
//	printf("\n check srci %c \n", src[i]); src[i] character %s does not work
	}
	dest[leng + i] = '\0';

//printf("\n check point: %s: ", dest);
return (dest);

}

int main (int argc, char *argv[])
{
	if (argc > 4)
		return (0);
	printf("\n my prog: %s \n", ft_strcat(argv[1], argv[2]));
	printf("org prog: %s \n", strcat(argv[1], argv[2])); // results will not be same called memorr trap. argv[1] changes in the first part

return (0);
}
