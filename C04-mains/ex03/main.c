#include <stdio.h>

int	ft_atoi(char *str);

int main()
{
	char str[] = "   -+--+++2182";
	int result;

	printf("La cadena es %s", str);
	printf("\n");
	result = ft_atoi(str);
	printf("El resultado es %d", result);
}
