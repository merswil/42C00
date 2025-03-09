#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	xx;

	xx = 'a';
	while (xx <= 'z')
	{
		write(1, &xx, 1);
		xx++;
	}
}
