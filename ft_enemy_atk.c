#include "wom.h"

void	ft_enemy_atk(Mob *enemyptr, Perso *playerptr)
{
	char *chardealt;
	int dealt = enemyptr->dmg;
	struct timespec req = {0, PAUSE_100MS};
	playerptr->hp -= dealt;

	// ATTAQUE ENNEMIE (DEBUT)
	write(1, "\033[31m", 5);	
	write(1, "         /", 10);
	nanosleep(&req, NULL);
	BLANK_TERMINAL;
	write(1, "       / /", 10);
	write(1, "\n    / / / ", 11);
	nanosleep(&req, NULL);
	BLANK_TERMINAL;
	write(1, "     / / /", 10);
	write(1, "\n    / / / ", 11);
	write(1, "\n     / /  ", 11);
	nanosleep(&req, NULL);
	BLANK_TERMINAL;
	write(1, "       / /", 11);
	write(1, "\n    / / / ", 11);
	write(1, "\n   / / /  ", 11);
	nanosleep(&req, NULL);
	BLANK_TERMINAL;
	write(1, "     /    ", 11);
	write(1, "\n    / / / ", 11);
	write(1, "\n   / / /  ", 11);
	nanosleep(&req, NULL);
	BLANK_TERMINAL;
	write(1, "\n    / /   ", 11);
	write(1, "\n   / / /  ", 11);
	nanosleep(&req, NULL);
	BLANK_TERMINAL;
	write(1, "\n    /     ", 11);
	write(1, "\n   / /    ", 11);
	nanosleep(&req, NULL);
	BLANK_TERMINAL;
	write(1, "\n\n   /      ", 12);
	nanosleep(&req, NULL);
	BLANK_TERMINAL;
	req.tv_nsec = PAUSE_1S;
	chardealt = ft_itoa(dealt);
	write(1, "\033[0m", 5);	
	write(1, "\n\n\033[1m\033[41m -", 14);
	ft_put_str(chardealt);
	write(1, " PV (AIE)", 9);
	write(1, "\033[0m", 5);
	nanosleep(&req, NULL);
	write(1, "\033[0m", 5);	
	BLANK_TERMINAL;
	free(chardealt);
	// ATTAQUE ENNEMIE (FIN)
}
