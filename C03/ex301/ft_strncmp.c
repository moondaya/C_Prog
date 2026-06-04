#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;


	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i] || s1[i] == '\0')
			return ((unsigned int) s1[i] - (unsigned int) (s2[i]));
	i++;
	}
return ((unsigned int) s1[i] - (unsigned int) s2[i]);
}

int main(int argc, char *argv[])
{
	unsigned int n;

	n = 5; // will be modified with ft_atoi later"
	if (argc > 4)
		return (0);

	printf("\n my prog %d " , ft_strncmp (argv[1], argv[2], n));
	printf("\n org progr %d \n", strncmp (argv[1], argv[2], n));
			
return (0);
}
