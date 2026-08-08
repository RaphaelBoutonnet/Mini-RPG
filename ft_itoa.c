#include "wom.h"

char	*ft_reverse(char *str, int len)
{
	int (i) = 0;
	char temp;
	while ((len / 2) > 0 )
	{
		temp = str[i];
		str[i] = str[len - 1];
		str[len - 1] = temp;
		i++;
		len--;
	}
	return (str);
}

char	*ft_itoa(int nb)
{
	char	*res;
	char	chartemp;
	int	nbtemp = nb;
	int (i) = 0;
	int (count) = 0;
	if (nb <= 0)
	{
		res = malloc(sizeof(char) + 1);
		if (res == NULL)
			return NULL;
		res[0] = '0';
		res[1] = '\0';
	}
	else
	{
		while (nbtemp > 0)
		{
			nbtemp = nbtemp / 10;
			count++;
		}
		res = malloc((sizeof(char) * count) + 1);
		if (res == NULL)
			return NULL;
		res[0] = '\0';
		while (nb > 0)
		{
			chartemp = (nb % 10) + '0';
			nb = nb / 10;
			res[i] = chartemp;
			i++;
		}
		ft_reverse(res, count);
		res[i] = '\0';
	}
	return (res);
}
/*
 * DE QUOI TESTER L'ITOA EN LOCAL SI BESOIN
int	main(void)
{
	char	*resultat;;
	resultat = ft_itoa(110);
	printf("\n%s\n", resultat);
	free(resultat);
	return 0;
}
*/
