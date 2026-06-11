#include <unistd.h>
#include <stdio.h>
#include <string.h>
// Unsiged important because, std eng letter can be stored 1 to 128
// special char can be stored 128 to 255, and -128 to -1 in signed char
// it is safety .
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}

int main(int argc, char *argv[])
{
	//int res;
	if (argc < 4)
	{
		printf("\n my func %d ", ft_strcmp(argv[1], argv[2]));
		printf("\n org func %d ", strcmp(argv[1], argv[2]));
	}
return (0);
}

