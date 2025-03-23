#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_numbers(void)
{
	int ascii_num = 48;
	while(ascii_num < 58)
	{
		ft_putchar(ascii_num);
		ascii_num++;
	}
}
