#include "wom.h"

void	ft_use_spell(char nsp)
{
	if (nsp == '1')
		write(1, "\n!!!! BOOOOOOM !!!! Cette mamie n'avait aucune chance. Tu es en etat d'arrestation.\n", 84);
	if (nsp == '2')
		write(1, "\nHa bah ca sert absolument a rien. Vraiment naze comme sort... L'academie des mages te renie. Fin.\n", 100);
	if (nsp == '3')
		write(1, "\nTu sors une BD et te prelasses devant pendant 17 heures. Tu oublies de boire, et meurs de soif. Fin.\n", 103);
	if (nsp == '4')
		write(1, "\nBoOOOoOOUUUuuulLeeeeeEEee de FeeeUUuuUUUuuuuu. Ha mince je te l'ai lancee dessus... T'es mort sur le coup.\n", 109);
}

void	ft_wrong_key(int i)
{
	if (i == 0)
		write(1, "\nNon, ce n'est pas comme ca, reessaye !\n", 40);
	if (i == 1)
		write(1, "\nAlors, tu ne te rappelles plus comment lancer un sort ?\n", 57);
	if (i == 2)
		write(1, "\nCette touche servait a casser ton bidulometre... Je vais t'aider :\n\nAPPUIE SUR 1, 2 ou 3.\n", 91);
	if (i >= 3 && i <= 5)
		write(1, "\nCe n'est pas la bonne touche...\n", 33);
	if (i == 6)
	{
		write(1, "\nBON C'EST PLUS POSSIBLE LA, JE VAIS LE LANCER MOI-MEME\n", 56);
		ft_use_spell('4');
	}
}

void	ft_show_spells(void)
{
	write(1, "\n", 1);
	write(1, "\n1. Boule de feu", 16);
	write(1, "\n2. Boule de gomme", 18);
	write(1, "\n3. Boule et Bill", 17);
	write(1, "\n\n", 2);
}

void	ft_atk(void)
{
	int (i) = 0;
	char	buffer;
	write(1, "\nEt si on s'entrainait ? Lance ton premier sort.\n", 50);
	ft_show_spells();
	while (buffer != 'S')
	{
		read(0, &buffer, 1);
		if ((!(buffer >= '1' && buffer <= '3')) && buffer != 10)
		{
			ft_wrong_key(i);
			i++;
			buffer = ('Z' - i);
		}
		else if (buffer >= '1' && buffer <= '3')
		{
			ft_use_spell(buffer);
			buffer = 'S';
		}
	}
}
