#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_reverse_alphabet(void)
{
	int ascii_num = 122;
	while(ascii_num > 96)
	{
		ft_putchar(ascii_num);
		ascii_num--;
	}
}
