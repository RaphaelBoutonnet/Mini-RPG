#include "wom.h"

void	ft_exp(int enemynumber, Perso *playerptr)
{
	int currentxp = playerptr->exp;
	int (nxp) = 0;


	if (enemynumber < 2) // Si l'ennemi tue est au maximum le second ennemi, gagne 70 xp.
		nxp = 70;
	if ((enemynumber >= 2) && (enemynumber < 6)) // Entre le troisieme et le sixieme ennemi, 34 xp.
		nxp = 34;
	if ((enemynumber >= 6 && (enemynumber < 8))) // Entre le 6eme et 8eme ennemi, 30 xp.
		nxp = 25;
	if (enemynumber == 8) // Le 8eme ennemi, 80 xp.
		nxp = 80;
	if (enemynumber >= 9) // A partir du 9eme ennemi, 25 xp.
		nxp = 25;
	if (enemynumber > 0)
		currentxp = (currentxp + nxp);	// Ajoute l'xp correspondant au monstre venant d'etre tue a l'xp du player. 
	if (currentxp >= 100)
	{
		currentxp = (currentxp - 100); // Limite l'xp d'un niveau a 100xp.
		playerptr->lvl += 1; // Le joueur gagne un niveau.
		playerptr->def++; // La defense du player prend un point tous les deux niveaux.
		ft_lvl_up();
	}
	playerptr->exp = currentxp;
}
