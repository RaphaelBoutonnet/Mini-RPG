#include "wom.h"

void	ft_show_exp(Perso *playerptr)
{
	int countdown;
	char *charlvl;
	char *charxp;

	countdown = (playerptr->exp / 4); // Countdown va permettre d'afficher la barre bleue d'xp a la bonne taille en fonction du curentxp. Divise par 4 pour faire la bonne taille max.
	write(1, "\nlvl.", 5);
	charlvl = ft_itoa(playerptr->lvl + 1); // Donne la valeur reelle au lvl du joueur.
	ft_put_str(charlvl);
	free(charlvl);
	write(1, "     [", 6);
	charxp = ft_itoa(playerptr->exp);
	ft_put_str(charxp);
	free(charxp);
	write(1, "xp]\n", 4);
	// Affiche l'xp actuel.
	
	while (countdown > 0)
	{
		write(1, "\033[46m", 5); // Surligne le texte en bleu.
		write(1, " ", 1);
		countdown--;
	}
	write(1, "\n\n\033[0m", 7);
}
