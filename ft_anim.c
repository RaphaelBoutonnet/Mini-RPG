#define _POSIX_C_SOURCE 199309L
#include "wom.h"

void	ft_anim(int nb, int dealt, int alive, int target)
{
	char	*chardealt;
	struct timespec req = {0, PAUSE_100MS};

	// BOULE DE FEU (DEBUT)

	if (nb == 0)
	{
		write(1, "\n\n  ~~~o", 7);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n  ~~~~~~o", 11);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n  ~~~~ ~~~ ~~~°O", 18);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n  ~~   ~~ ~~ ~~~~~°O", 23);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n    ~~~     ~~~~~  ~~~o", 25);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n     ~~     ~~~ ~~   ~~~o", 27);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n        ~    ~  ~~   ~~ ~0", 28);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n           ~    ~   ~ ~~ ~0", 29);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n              ~    ~  ~  ~ 0", 30);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n                  ~    ~  #*#", 31);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n                         [HIT]", 32);
		chardealt = ft_itoa(dealt); // Convertit l'int dealt en str pour l'afficher
		write(1, "\n\n\033[1m\033[31m -", 14); // Met le texte en gras et rouge et affiche -
		ft_put_str(chardealt); // Affiche les dégats
		write(1, " PV", 3); // Affiche l'indicateur PV à côté du nombre de dégats
		if (alive == 0)
			write(1, " (MORT)", 7); // Si la cible est morte, indique (MORT).
		write(1, "\033[0m", 5); // Réinitialise la police d'écriture
		nanosleep(&req, NULL); // Met une pause de 100 ms.
		BLANK_TERMINAL; // Efface le terminal.
		
		// La commande se répète plusieurs fois : en fait c'est juste pour laisser
		// affiché plus longtemps... J'aurais pu créer un second timer plus long
		// et n'afficher qu'une fois aussi.
		write(1, "\n\n                         [HIT]", 32);
		write(1, "\n\n\033[1m\033[31m -", 14);
		ft_put_str(chardealt);
		write(1, " PV", 3);
		if (alive == 0)
			write(1, " (MORT)", 7);
		write(1, "\033[0m", 5);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n                         [HIT]", 32);
		write(1, "\n\n\033[1m\033[31m -", 14);
		ft_put_str(chardealt);
		write(1, " PV", 3);
		if (alive == 0)
			write(1, " (MORT)", 7);
		write(1, "\033[0m", 5);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n                         [HIT]", 32);
		write(1, "\n\n\033[1m\033[31m -", 14);
		ft_put_str(chardealt);
		write(1, " PV", 3);
		if (alive == 0)
			write(1, " (MORT)", 7);
		write(1, "\033[0m", 5);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n                         [HIT]", 32);
		write(1, "\n\n\033[1m\033[31m -", 14);
		ft_put_str(chardealt);
		write(1, " PV", 3);
		if (alive == 0)
			write(1, " (MORT)", 7);
		write(1, "\033[0m", 5);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n                         [HIT]", 32);
		write(1, "\n\n\033[1m\033[31m -", 14);
		ft_put_str(chardealt);
		write(1, " PV", 3);
		if (alive == 0)
			write(1, " (MORT)", 7);
		write(1, "\033[0m", 5);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n                         [HIT]", 32);
		write(1, "\n\n\033[1m\033[31m -", 14);
		ft_put_str(chardealt);
		write(1, " PV", 3);
		if (alive == 0)
			write(1, " (MORT)", 7);
		write(1, "\033[0m", 5);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		free(chardealt); // Free le malloc pour chardealt
		write(1, "\n\n                         -000-", 31);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n                         -o0o-", 31);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n                         --o--", 31);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n                          -o-", 30);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n                           -", 29);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n                            ", 29);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n                            ", 29);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n                            ", 29);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
	}

	// BOULE DE FEU (FIN)

	// TOUCHER DU PHENIX (DEBUT)
	
	if (nb == 1)
	{
		write(1, "\n\nV                     ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVI                    ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIE                   ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIEN                  ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS                 ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS                 ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A               ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A               ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A M             ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A MO            ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A MOI           ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A MOI           ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A MOI P         ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A MOI PH        ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A MOI PHE       ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A MOI PHEN      ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A MOI PHENI     ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A MOI PHENIX    ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A MOI PHENIX    ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n* * * * * * * * * * * ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n * * * * * * * * * * *", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A MOI PHENIX !  ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A MOI PHENIX !! ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A MOI PHENIX !!!", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A MOI PHENIX !!!", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A MOI PHENIX !!!", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\nVIENS A MOI PHENIX !!!", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n* * * * * * * * * * * ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n * * * * * * * * * * *", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n* * * * * * * * * * * ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n * * * * * * * * * * *", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n* * * * * * * * * * * ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n * * * * * * * * * * *", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n* * * * * * * * * * * ", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n * * * * * * * * * * *", 24);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		if (target == 0) // Si j'attaque l'ennemi avec ce sort
		{
			chardealt = ft_itoa(dealt); // Convertit l'int dealt en str pour l'afficher
			write(1, "\n\n      [HIT]", 13);
			write(1, "\n\n\033[1m\033[31m -", 14);
			ft_put_str(chardealt);
			write(1, " PV", 3);
			if (alive == 0)
				write(1, " (MORT)", 7);
			write(1, "\033[0m", 5);
			nanosleep(&req, NULL);
			BLANK_TERMINAL;
			write(1, "\n\n      [HIT]", 13);
			write(1, "\n\n\033[1m\033[31m -", 14);
			ft_put_str(chardealt);
			write(1, " PV", 3);
			if (alive == 0)
				write(1, " (MORT)", 7);
			write(1, "\033[0m", 5);
			nanosleep(&req, NULL);
			BLANK_TERMINAL;
			write(1, "\n\n      [HIT]", 13);
			write(1, "\n\n\033[1m\033[31m -", 14);
			ft_put_str(chardealt);
			write(1, " PV", 3);
			if (alive == 0)
				write(1, " (MORT)", 7);
			write(1, "\033[0m", 5);
			nanosleep(&req, NULL);
			BLANK_TERMINAL;
			write(1, "\n\n      [HIT]", 13);
			write(1, "\n\n\033[1m\033[31m -", 14);
			ft_put_str(chardealt);
			write(1, " PV", 3);
			if (alive == 0)
				write(1, " (MORT)", 7);
			write(1, "\033[0m", 5);
			nanosleep(&req, NULL);
			BLANK_TERMINAL;
			write(1, "\n\n      [HIT]", 13);
			write(1, "\n\n\033[1m\033[31m -", 14);
			ft_put_str(chardealt);
			write(1, " PV", 3);
			if (alive == 0)
				write(1, " (MORT)", 7);
			write(1, "\033[0m", 5);
			nanosleep(&req, NULL);
			BLANK_TERMINAL;
			write(1, "\n\n      [HIT]", 13);
			write(1, "\n\n\033[1m\033[31m -", 14);
			ft_put_str(chardealt);
			write(1, " PV", 3);
			if (alive == 0)
				write(1, " (MORT)", 7);
			write(1, "\033[0m", 5);
			nanosleep(&req, NULL);
			BLANK_TERMINAL;
			write(1, "\n\n      [HIT]", 13);
			write(1, "\n\n\033[1m\033[31m -", 14);
			ft_put_str(chardealt);
			write(1, " PV", 3);
			if (alive == 0)
				write(1, " (MORT)", 7);
			write(1, "\033[0m", 5);
			nanosleep(&req, NULL);
			BLANK_TERMINAL;
			free(chardealt); // Free le malloc
		}
		if (target == 1) // Si je me soigne avec ce sort
		{
			chardealt = ft_itoa(dealt); // Convertit l'int dealt en str pour l'afficher
			write(1, "\n\n      [HEAL]", 14);
			write(1, "\n\n\033[1m\033[32m +", 14);
			ft_put_str(chardealt);
			write(1, " PV", 3);
			write(1, "\033[0m", 5);
			nanosleep(&req, NULL);
			BLANK_TERMINAL;
			write(1, "\n\n      [HEAL]", 14);
			write(1, "\n\n\033[1m\033[32m +", 14);
			ft_put_str(chardealt);
			write(1, " PV", 3);
			write(1, "\033[0m", 5);
			nanosleep(&req, NULL);
			BLANK_TERMINAL;
			write(1, "\n\n      [HEAL]", 14);
			write(1, "\n\n\033[1m\033[32m +", 14);
			ft_put_str(chardealt);
			write(1, " PV", 3);
			write(1, "\033[0m", 5);
			nanosleep(&req, NULL);
			BLANK_TERMINAL;
			write(1, "\n\n      [HEAL]", 14);
			write(1, "\n\n\033[1m\033[32m +", 14);
			ft_put_str(chardealt);
			write(1, " PV", 3);
			write(1, "\033[0m", 5);
			nanosleep(&req, NULL);
			BLANK_TERMINAL;
			write(1, "\n\n      [HEAL]", 14);
			write(1, "\n\n\033[1m\033[32m +", 14);
			ft_put_str(chardealt);
			write(1, " PV", 3);
			write(1, "\033[0m", 5);
			nanosleep(&req, NULL);
			BLANK_TERMINAL;
			write(1, "\n\n      [HEAL]", 14);
			write(1, "\n\n\033[1m\033[32m +", 14);
			ft_put_str(chardealt);
			write(1, " PV", 3);
			write(1, "\033[0m", 5);
			nanosleep(&req, NULL);
			BLANK_TERMINAL;
			write(1, "\n\n      [HEAL]", 14);
			write(1, "\n\n\033[1m\033[32m +", 14);
			ft_put_str(chardealt);
			write(1, " PV", 3);
			write(1, "\033[0m", 5);
			nanosleep(&req, NULL);
			BLANK_TERMINAL;
			write(1, "\n\n      [HEAL]", 14);
			write(1, "\n\n\033[1m\033[32m +", 14);
			ft_put_str(chardealt);
			write(1, " PV", 3);
			write(1, "\033[0m", 5);
			nanosleep(&req, NULL);
			BLANK_TERMINAL;
			free(chardealt); // Free le malloc
		}


	}
}
