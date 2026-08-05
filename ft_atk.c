#include "wom.h"

void	ft_use_spell(char nspell, Mob *enemyptr, Perso *playerptr, int target)
{
	if (nspell == '1') // Boule de feu
	{
		write(1, "\n~~~~~~~~~o", 12);
		enemyptr->hp = (enemyptr->hp) - (7 - enemyptr->def);
	}
	if (nspell == '2') // Toucher du phenix
	{
		write(1, "\n*~#~*~#~*", 11);
		if (target == 0)
			enemyptr->hp = (enemyptr->hp) - (5 - enemyptr->def);
		else
			playerptr->hp = (playerptr->hp) + 12;
	}
	if (nspell == '3') // Tonnerre foudroyant
	{
		write(1, "\n~/~/~~/~~~/~/~", 16);
		enemyptr->hp = (enemyptr->hp) - (15 - enemyptr->def);
	}
	if (nspell == '4') // Coup de tronc d'arbre
	{
		write(1, "\n~~~======##", 13);
		enemyptr->hp = (enemyptr->hp) - (1000 - enemyptr->def);
	}
}

void	ft_wrong_key(int i, Mob *enemyptr, Perso *playerptr)
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
		ft_use_spell(4, enemyptr, playerptr, 0/*Sur l'ennemi*/);
	}
}

void	ft_show_spells(int nb)
{
	nb = nb + 1; // Ligne a supprimer, utile juste pour des tests. Nb devra permettre d'afficher le nombre de sorts débloqués actuellement.
	write(1, "\n", 1);
	write(1, "\n1. Boule de feu", 16);
	write(1, "\n2. Toucher du phenix", 22);
	write(1, "\n3. Tonnerre foudroyant", 24);
	write(1, "\n4. Coup de tronc d'arbre", 26);
	write(1, "\n\n", 2);
}

void	ft_chose_enemy(int enemynumber, Mob *enemyptr)
{
	if (enemynumber == 0)
	{
		enemyptr->hp = 10;
		enemyptr->dmg = 4;
		enemyptr->def = 0;
	}
	if (enemynumber == 1)
	{
		enemyptr->hp = 22;
		enemyptr->dmg = 4;
		enemyptr->def = 1;
	}
}

void	ft_atk(void)
{
	Perso player;
	Perso *playerptr = &player;
	Mob enemy;
	Mob *enemyptr = &enemy;
	int (i) = 0;
	int enemynumber = 0;
	int success = 0;
	char buffer;
	char targetbuffer;
	while ((player.hp > 0) || (success != 1) || (enemynumber != 2) /* Cette dernière condition sert de condition d'arrêt, à modifier pour la suite.*/)
	{
		write(1, "\nUn ennemi attaque, defends-toi !", 34);
		ft_chose_enemy(enemynumber, enemyptr);
		while (enemy.hp > 0)
		{
			ft_show_spells(4/*Nombre de spells actuellement débloqués à ce stade*/);
			while (buffer != 'S')
			{
				write(1, "\nPV de l'ennemi : ", 19);
				if (enemy.hp >= 10)
					write(1, &enemy.hp, 2);// ERREUR ICI JE PENSE
				else
					write(1, &enemy.hp, 1);// ERREUR ICI AUSSI JE PENSE
				read(0, &buffer, 1);
				if ((!(buffer >= '1' && buffer <= '3')) && buffer != 10)
				{
					ft_wrong_key(i, enemyptr, playerptr);
					i++;
					buffer = ('Z' - i);
				}
				else if (buffer >= '1' && buffer <= '3')
				{
					if (buffer == '2')
					{
						write(1, "\nSur qui l'utiliser ?\n1 : Moi\n2 : L'ennemi", 43);
						while (targetbuffer != 'S')
						{
							read(0, &targetbuffer, 1);
							if (targetbuffer == '1')
							{
								ft_use_spell(buffer, enemyptr, playerptr, 1/*Sur le player*/);
								targetbuffer = 'S';
							}
							else if (targetbuffer == '2')
							{
								ft_use_spell(buffer, enemyptr, playerptr, 0/*Sur l'ennemi*/);
								targetbuffer = 'S';
							}
							else
							{
								write(1, "\nLoupe, ton sort ne se lance pas...", 36);
								targetbuffer = 'S';
							}
						}
					}
					else
						ft_use_spell(buffer, enemyptr, playerptr, 0/*Sur l'ennemi*/);
					buffer = 'S';
				}
			}
		}
		enemynumber++;
	}
}
