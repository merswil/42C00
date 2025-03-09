#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	xx;

	xx = 'z';
	while (xx >= 'a')
	{
		write(1, &xx, 1);
		xx--;
	}
}
