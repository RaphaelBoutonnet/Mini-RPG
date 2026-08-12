#include "wom.h"

void	ft_enemy_atk(Mob *enemyptr, Perso *playerptr)
{
	char *chardealt;
	int dealt = ((enemyptr->dmg) - (playerptr->def));
	struct timespec req = {0, PAUSE_100MS};
	if (dealt > 0)
		playerptr->hp -= dealt;

	// ATTAQUE ENNEMIE (DEBUT)
	BLANK_TERMINAL;
	write(1, "\033[?25l", 7);
	write(1, "\n\n\033[1m\033[41m  L'ENNEMI ATTAQUE !\n\n\n", 35);
	write(1, "\033[0m", 5);	
	write(1, "\033[31m", 5);	
	write(1, "         /", 10);
	write(1, "\033[0m", 5);	
	nanosleep(&req, NULL);
	BLANK_TERMINAL;
	write(1, "\n\n\033[1m\033[41m  L'ENNEMI ATTAQUE !\n\n\n", 35);
	write(1, "\033[0m", 5);	
	write(1, "\033[31m", 5);	
	write(1, "       / /", 10);
	write(1, "\n    / / / ", 11);
	write(1, "\033[0m", 5);	
	nanosleep(&req, NULL);
	BLANK_TERMINAL;
	write(1, "\n\n\033[1m\033[41m  L'ENNEMI ATTAQUE !\n\n\n", 35);
	write(1, "\033[0m", 5);	
	write(1, "\033[31m", 5);	
	write(1, "     / / /", 10);
	write(1, "\n    / / / ", 11);
	write(1, "\n     / /  ", 11);
	write(1, "\033[0m", 5);	
	nanosleep(&req, NULL);
	BLANK_TERMINAL;
	write(1, "\n\n\033[1m\033[41m  L'ENNEMI ATTAQUE !\n\n\n", 35);
	write(1, "\033[0m", 5);	
	write(1, "\033[31m", 5);	
	write(1, "       / /", 11);
	write(1, "\n    / / / ", 11);
	write(1, "\n   / / /  ", 11);
	write(1, "\033[0m", 5);	
	nanosleep(&req, NULL);
	BLANK_TERMINAL;
	write(1, "\n\n\033[1m\033[41m  L'ENNEMI ATTAQUE !\n\n\n", 35);
	write(1, "\033[0m", 5);	
	write(1, "\033[31m", 5);	
	write(1, "     /    ", 11);
	write(1, "\n    / / / ", 11);
	write(1, "\n   / / /  ", 11);
	write(1, "\033[0m", 5);	
	nanosleep(&req, NULL);
	BLANK_TERMINAL;
	write(1, "\n\n\033[1m\033[41m  L'ENNEMI ATTAQUE !\n\n\n", 35);
	write(1, "\033[0m", 5);	
	write(1, "\033[31m", 5);	
	write(1, "\n    / /   ", 11);
	write(1, "\n   / / /  ", 11);
	write(1, "\033[0m", 5);	
	nanosleep(&req, NULL);
	BLANK_TERMINAL;
	write(1, "\n\n\033[1m\033[41m  L'ENNEMI ATTAQUE !\n\n\n", 35);
	write(1, "\033[0m", 5);	
	write(1, "\033[31m", 5);	
	write(1, "\n    /     ", 11);
	write(1, "\n   / /    ", 11);
	write(1, "\033[0m", 5);	
	nanosleep(&req, NULL);
	BLANK_TERMINAL;
	write(1, "\n\n\033[1m\033[41m  L'ENNEMI ATTAQUE !\n\n\n", 35);
	write(1, "\033[0m", 5);	
	write(1, "\033[31m", 5);	
	write(1, "\n\n   /      ", 12);
	write(1, "\033[0m", 5);	
	nanosleep(&req, NULL);
	BLANK_TERMINAL;
	req.tv_nsec = PAUSE_1S;
	write(1, "\n\n\033[1m\033[41m  L'ENNEMI ATTAQUE !\n\n\n", 35);
	write(1, "\033[0m", 5);	
	chardealt = ft_itoa(dealt);
	write(1, "\033[0m", 5);	
	write(1, "\n\n\n\n\n\033[1m\033[41m -", 17);
	ft_put_str(chardealt);
	write(1, " PV (AIE)", 9);
	write(1, "\033[0m", 5);
	nanosleep(&req, NULL);
	nanosleep(&req, NULL);
	write(1, "\033[0m", 5);	
	BLANK_TERMINAL;
	free(chardealt);
	write(1, "\033[?25h", 7);
	// ATTAQUE ENNEMIE (FIN)
}
