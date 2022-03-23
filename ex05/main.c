#include <stdio.h>

int ft_strlcat(char *dest, char *src, unsigned int size);

int main()
{
	char dest[20] = "hola compis!";
	char src[] = "adios!";

	printf("The string src is: %s", src);
	printf("\n");
	printf("The string dest is: %s", dest);
	printf("\n");
	ft_strlcat(dest, src, 18);
	printf("The string dest after strlcat is %s ", dest);
	return(0);
}


