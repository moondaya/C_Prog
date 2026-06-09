#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int destlen;
	unsigned int srclen;
	int	i;

	i = 0;
	destlen = 0;
	srclen = 0;
	while(dest[destlen] != '\0' && destlen < size)
		destlen++;

	while(src[srclen] != '\0')
		srclen++;

	if (destlen >= size)
		return (size + srclen);
	while (src[i] != '\0'&& (destlen + i ) < (size - 1))
	{	
		dest[destlen + i] = src[i];
		i++;
	}	
	printf(" \n %s \n", dest);
	if (destlen < size)
		dest[destlen + i] = '\0';

	return (destlen + srclen);
}

int	main(int argc, char *argv[])
{
	unsigned int ;
	
	n = 15;
	if (argc > 3)
		return (" \n %d \n", printf(" not right amount of input"));
	
	printf("\n %d \n ",ft_strlcat(argv[1], argv[2], n));
// this part fails as n is 15 more than argv[1] size comp keep reading files which cause memory smash. it starts from first character and keep reading next to that until 15th that invades argv[2] is argv[1] is shorter and size n
// to fix it create a new char string and conmy argv[1] there and run func. 
return (0);	

}
