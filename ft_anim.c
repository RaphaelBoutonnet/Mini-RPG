#define _POSIX_C_SOURCE 199309L
#include "wom.h"

void	ft_wait_one_sec(void)
{
	struct timespec req = {0, PAUSE_100MS};
	req.tv_nsec = PAUSE_1S; // Set la pause a 1 seconde au lieu de 100ms.
	nanosleep(&req, NULL);
}

void	ft_anim(int nb, int dealt, int alive, int target)
{
	char	*chardealt;
	struct timespec req = {0, PAUSE_100MS};

	// BOULE DE FEU (DEBUT)

	if (nb == 0)
	{
		write(1, "\033[?25l", 7);
		BLANK_TERMINAL;
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
		req.tv_nsec = PAUSE_1S; // Set la pause a 1 seconde au lieu de 100ms.
		chardealt = ft_itoa(dealt); // Convertit l'int dealt en str pour l'afficher
		write(1, "\n\n\033[1m\033[31m -", 14); // Met le texte en gras et rouge et affiche -
		ft_put_str(chardealt); // Affiche les dégats
		write(1, " PV ", 4); // Affiche l'indicateur PV à côté du nombre de dégats
		if (alive == 0)
			write(1, "\033[47m(ENNEMI MORT)", 19); // Si la cible est morte, indique (MORT).
		write(1, "\033[0m", 5); // Réinitialise la police d'écriture
		nanosleep(&req, NULL); // Met une pause de 1s.
		nanosleep(&req, NULL); // Met une pause de 1s.
		BLANK_TERMINAL; // Efface le terminal.
		free(chardealt); // Free le malloc pour chardealt
		req.tv_nsec = PAUSE_100MS;
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
		write(1, "\033[?25h", 7);
	}

	// BOULE DE FEU (FIN)

	// TOUCHER DU PHENIX (DEBUT)
	
	if (nb == 1)
	{
		write(1, "\033[?25l", 7);
		BLANK_TERMINAL;
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
		write(1, "\033[31m", 5);
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
		write(1, "\033[0m", 5); // Réinitialise la police d'écriture
		BLANK_TERMINAL;
		if (target == 0) // Si j'attaque l'ennemi avec ce sort
		{
			BLANK_TERMINAL;
			req.tv_nsec = PAUSE_1S;
			chardealt = ft_itoa(dealt); // Convertit l'int dealt en str pour l'afficher
			write(1, "\n\n      [HIT]", 13);
			write(1, "\n\n\033[1m\033[31m -", 14);
			ft_put_str(chardealt);
			write(1, " PV ", 4);
			if (alive == 0)
				write(1, "\033[47m(ENNEMI MORT)", 19);
			write(1, "\033[0m", 5);
			nanosleep(&req, NULL);
			nanosleep(&req, NULL);
			BLANK_TERMINAL;
			free(chardealt); // Free le malloc
			write(1, "\033[?25h", 7);
		}
		if (target == 1) // Si je me soigne avec ce sort
		{
			BLANK_TERMINAL;
			req.tv_nsec = PAUSE_1S;
			chardealt = ft_itoa(dealt); // Convertit l'int dealt en str pour l'afficher
			write(1, "\n\n      [HEAL]", 14);
			write(1, "\n\n\033[1m\033[32m +", 14);
			ft_put_str(chardealt);
			write(1, " PV", 3);
			write(1, "\033[0m", 5);
			nanosleep(&req, NULL);
			nanosleep(&req, NULL);
			BLANK_TERMINAL;
			free(chardealt); // Free le malloc
			write(1, "\033[?25h", 7);
		}


	}

	// TOUCHER DU PHENIX (FIN)

	// TONNERRE FOUDROYANT (DEBUT)
	
	if (nb == 2)
	{
		write(1, "\033[?25l", 7);
		BLANK_TERMINAL;
		write(1, "\033[46m", 5);
		write(1, "\n\n  ^v ^v^ v", 12);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n  ^v ^v /v^v ^ v^v", 20);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n  #v ## /v^v ^ v^v/-~^v-^", 27);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n     *  .  ,     '       \n", 28);
		write(1, "  #v ## /v^v ^ v^v/-~^v-^", 25);
		write(1, "\n        . *,        '    ", 26);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n      # .  ,  *  '  #    \n", 28);
		write(1, "        /v     v^   ~^ -^", 25);
		write(1, "\n           ,   . ## '   #", 26);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n       # .  ,  *  '  #   \n", 28);
		write(1, "                         ", 25);
		write(1, "\n          ,   . ## '   # ", 26);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n        # .     *        \n", 28);
		write(1, "                         ", 25);
		write(1, "\n         ,        '   #  ", 26);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n                 *       \n", 28);
		write(1, "                         ", 25);
		write(1, "\n         ,               ", 26);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n     *  .  ,     '       \n", 28);
		write(1, "  #v ## /v^v ^ v^v/-~^v-^", 25);
		write(1, "\n        . *,        '    ", 26);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n      # .  ,  *  '  #    \n", 28);
		write(1, "        /v     v^   ~^ -^", 25);
		write(1, "\n           ,   . ## '   #", 26);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n       # .  ,  *  '  #   \n", 28);
		write(1, "                         ", 25);
		write(1, "\n          ,   . ## '   # ", 26);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n        # .     *        \n", 28);
		write(1, "                         ", 25);
		write(1, "\n         ,        '   #  ", 26);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n                 *       \n", 28);
		write(1, "                         ", 25);
		write(1, "\n         ,               ", 26);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n     *  .  ,     '       \n", 28);
		write(1, "  #v ## /v^v ^ v^v/-~^v-^", 25);
		write(1, "\n        . *,        '    ", 26);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n      # .  ,  *  '  #    \n", 28);
		write(1, "        /v     v^   ~^ -^", 25);
		write(1, "\n           ,   . ## '   #", 26);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n       # .  ,  *  '  #   \n", 28);
		write(1, "                         ", 25);
		write(1, "\n          ,   . ## '   # ", 26);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n        # .     *        \n", 28);
		write(1, "                         ", 25);
		write(1, "\n         ,        '   #  ", 26);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n                 *       \n", 28);
		write(1, "                         ", 25);
		write(1, "\n         ,               ", 26);
		nanosleep(&req, NULL);
		write(1, "\033[0m", 5); // Réinitialise la police d'écriture
		BLANK_TERMINAL;
		write(1, "\n\n      [HIT]", 13);
		req.tv_nsec = PAUSE_1S; // Set la pause a 1 seconde au lieu de 100ms.
		chardealt = ft_itoa(dealt); // Convertit l'int dealt en str pour l'afficher
		write(1, "\n\n\033[1m\033[31m -", 14); // Met le texte en gras et rouge et affiche -
		ft_put_str(chardealt); // Affiche les dégats
		write(1, " PV ", 4); // Affiche l'indicateur PV à côté du nombre de dégats
		if (alive == 0)
			write(1, "\033[47m(ENNEMI MORT)", 19); // Si la cible est morte, indique (MORT).
		write(1, "\033[0m", 5); // Réinitialise la police d'écriture
		nanosleep(&req, NULL); // Met une pause de 1s.
		nanosleep(&req, NULL); // Met une pause de 1s.
		BLANK_TERMINAL; // Efface le terminal.
		free(chardealt); // Free le malloc pour chardealt
		write(1, "\033[?25h", 7);
	}

	// TONNERRE FOUDROYANT (FIN)
	
	// COUP DE TRONC D'ARBRE (DEBUT)
	
	if (nb == 3)
	{
		write(1, "\033[?25l", 7);
		req.tv_nsec = PAUSE_1S; // Set la pause a 1 seconde au lieu de 100ms.
		BLANK_TERMINAL;
		write(1, "\n\n\n\n\n      ##", 13);
		write(1, "\n      ||", 9);
		write(1, "\n      ||", 9);
		write(1, "\n      ||", 9);
		write(1, "\n      ||", 9);
		write(1, "\n      ||", 9);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n\n\n\n        ##", 15);
		write(1, "\n        ||", 11);
		write(1, "\n        ||", 11);
		write(1, "\n        ||", 11);
		write(1, "\n        ||", 11);
		write(1, "\n        ||", 11);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n\n\n\n          ##", 17);
		write(1, "\n          ||", 13);
		write(1, "\n          ||", 13);
		write(1, "\n          ||", 13);
		write(1, "\n          ||", 13);
		write(1, "\n          ||", 13);
		nanosleep(&req, NULL);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		write(1, "\n\n\n\n\n\n\n\n\n          __________#", 30);
		write(1, "\n          ----------#", 22);
		nanosleep(&req, NULL);
		BLANK_TERMINAL;
		chardealt = ft_itoa(dealt); // Convertit l'int dealt en str pour l'afficher
		write(1, "\n\n\033[1m\033[31m -", 14); // Met le texte en gras et rouge et affiche -
		ft_put_str(chardealt); // Affiche les dégats
		write(1, " PV ", 4); // Affiche l'indicateur PV à côté du nombre de dégats
		if (alive == 0)
			write(1, "\033[47m(ENNEMI MORT ET ENTERRE)", 30); // Si la cible est morte, indique (MORT).
		write(1, "\033[0m", 5); // Réinitialise la police d'écriture
		nanosleep(&req, NULL); // Met une pause de 1s.
		nanosleep(&req, NULL); // Met une pause de 1s.
		BLANK_TERMINAL; // Efface le terminal.
		free(chardealt); // Free le malloc pour chardealt
		write(1, "\033[?25h", 7);

	}
}
