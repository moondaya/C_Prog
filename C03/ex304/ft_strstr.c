#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_comp(char *strc, char *key) // aim whether whole consequent char of str matches with whole key.   
{
	unsigned int	i;
	
	i = 0;
	while (key [i] != '\0')
	{
		if (*strc != key[i])
			return (1);
		i++;
		strc++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return(str);
	while (*str != '\0')
	{
		if (*str == *to_find) // aim to find first char of str that matches with first char of to_find. 
		{
			if (ft_comp(str, to_find) == 0)
				return (str);
		}
	str++;
	}
//printf("\n %s \n", str);
return (0);
}		
			
int	main(int argc, char *argv[])
{
	char *result;

	if (argc > 3)
		return (0);
	result = ft_strstr(argv[1], argv[2]);
	if (result != 0)
		printf("\n %s \n", result);
	printf("\n %s \n", strstr(argv[1], argv[2]));
	return (0);
}

