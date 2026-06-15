#include <unistd.h>
#include <stdio.h>
// understnad the dest, src and size
// size" total memory capacity requried not only copied. at the end, size of memory..
// dest is the string to be appended in the scope of total memory size.
// src is the string to be appended in the scope of total memory size.

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int destlen;
	unsigned int srclen;
	int	i;
// intializing the values are important as they are used in the loop and condition.
// if not initialized it will take garbage value and cause memory smash.
	i = 0;
	destlen = 0;
	srclen = 0;
	while(dest[destlen] != '\0' && destlen < size)
		destlen++;

	while(src[srclen] != '\0')
		srclen++;
//size is total memory capacity to be required. NOT!!! the No of char to be copied.  
	if (destlen >= size) // it means destlen does not have enough EMPTY space for src  
		return (size + srclen); // this is not the value required (do not consider destlen) but aimed. 
		//if destlen is more than size, it means it does not have enough space to copy src.will not work until destlen larger.
		// therefore the total memory aimed is size + srclen.
		//  if destlen is less than size it means it has enough space to copy src. 
		// therefore the total memory required will be destlen + srclen.
		// Result, it safetly that the data needs to be worked with not more than size+srclen. 
		// destlen is out of the scope of the function consideration. it is not safe to work with that.
	while (src[i] != '\0'&& (destlen + i ) < (size - 1)) // last char for null char.  
	{	
		dest[destlen + i] = src[i];
		i++;
	}	
	printf(" \n %s \n", dest);
	if (destlen < size)
		dest[destlen + i] = '\0';

	return (destlen + srclen);
}
// Be carefull lesson learned below there. 
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
/**dest (Destination): The clothes you already put in the suitcase earlier (e.g., your shirts)
src (Source): The new clothes you are trying to stuff in right now (e.g., your pants)
size (Total Buffer Size): The absolute physical limit of the suitcase. 
It doesn't matter how many shirts or pants you have; the suitcase can only hold this much total volume
**/