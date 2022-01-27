#include <stdio.h>

void ft_putnbr_base(int nbr, char *base);

int main()
{
	int nbr;
	char base[] = "0123456789abcdef";

	nbr = -21474836;
	ft_putnbr_base(nbr, base);
}
