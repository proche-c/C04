#include <stdio.h>

int ft_strlen(char *str);

int main()
{
	char str[] = "hola compis!";
	int result;

	result = ft_strlen(str);
	printf("The string is: %s", str);
	printf("\n");
	printf("The size of the string is %d ", result);
	return(0);
}


