#include <unistd.h>

void ft_print_numbers()
{
	char n;
	n = 48;
	while(n <= 57)
	{
		write(1, &n, 1);
		n++;
	}
}