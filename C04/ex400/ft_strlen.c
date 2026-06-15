#include <unistd.h>
#include <stdio.h>


int ft_strlenalt(char *str)
{
	int cnta;
	
	cnta = 0;
	while(str[cnta] != '\0')
		cnta++;	
return (cnta);
}


/*  above alternative count better method. 9 lines to 12 lines. 
int	ft_strlen(char *str)
{
	int	cnt;

	cnt = 0;
	while(*str != '\0')
	{
		cnt++;
		str++;
	}
return (cnt);
}
*/

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return(printf("\n %s \n", "not correct no input"));
	printf("\n %d \n",ft_strlen(argv[1]));
return (0);
}
