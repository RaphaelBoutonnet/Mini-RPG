#include "wom.h"

void	ft_put_str(char *str)
{
	int (i) = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

