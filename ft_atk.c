#include "wom.h"

struct termios    *setup(struct termios *old)
{
    struct termios raw;

    tcgetattr(STDIN_FILENO, &raw);//permet de recuperer les attributs du terminal
    tcgetattr(STDIN_FILENO, old);
    raw.c_lflag &= ~(ECHO | ICANON);//desactive le mode canonique
    raw.c_cc[VMIN] = 1;//nombre min de caractere a recevoir
    raw.c_cc[VTIME] = 0;//attente a 0
    tcsetattr(STDIN_FILENO, TCSAFLUSH, &raw);//defini les attributs terminal
    return (old);
}

void	ft_use_spell(char nspell, Mob *enemyptr, Perso *playerptr, int target)
{
	int dealt;
	if (nspell == '1') // Boule de feu
	{
		dealt = (7 - enemyptr->def);
		enemyptr->hp = (enemyptr->hp) - (7 - enemyptr->def);
		if (enemyptr->hp <= 0)
			ft_anim(0, dealt, 0, 0);
		else
			ft_anim(0, dealt, 1, 0);
	}
	if (nspell == '2') // Toucher du phenix
	{
		if (target == 0)
		{
			dealt = (5 - enemyptr->def);
			enemyptr->hp = (enemyptr->hp) - (5 - enemyptr->def);
			if (enemyptr->hp <= 0)
				ft_anim(1/* Select le bon sort*/, dealt, 0/*L ennemi est mort*/, 0/* Vise l'ennemi*/);
			else
				ft_anim(1/* Select le bon sort*/, dealt, 1/* L ennemi est vivant*/, 0/* Vise l'ennemi*/);
		}
		else
		{
			dealt = 12;
			playerptr->hp = (playerptr->hp) + 12;
			ft_anim(1/* Sélectionne le bon sort */, dealt, 1/* L ennemi est vivant*/, 1/* Vise le player*/);
		}
	}
	if (nspell == '3') // Tonnerre foudroyant
	{
		dealt = (15 - enemyptr->def);
		enemyptr->hp = (enemyptr->hp) - (15 - enemyptr->def);
		if (enemyptr->hp <= 0)
			ft_anim(2, dealt, 0, 0);
		else
			ft_anim(2, dealt, 1, 0);
	}
	if (nspell == '4') // Coup de tronc d'arbre
	{
		dealt = (1000 - enemyptr->def);
		enemyptr->hp = (enemyptr->hp) - (1000 - enemyptr->def);
		if (enemyptr->hp <= 0)
			ft_anim(3, dealt, 0, 0);
		else
			ft_anim(3, dealt, 1, 0);
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
		write(1, "\nBON C'EST PLUS POSSIBLE LA, JE VAIS LE LANCER MOI-MEME\n", 57);
		ft_use_spell('3', enemyptr, playerptr, 0/*Sur l'ennemi*/);
	}
}

void	ft_show_spells(int nb)
{
	write(1, "\n", 1);
	if (nb >= 0)
		write(1, "\n\033[31m1. Boule de feu\033[0m", 26);
	if (nb >= 1)
		write(1, "\n\033[33m2. Toucher du phenix\033[0m", 31);
	if (nb >= 2)
		write(1, "\n\033[36m3. Tonnerre foudroyant\033[0m", 33);
	if (nb >= 3)
		write(1, "\n\033[35m4. Coup de tronc d'arbre\033[0m", 35);
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
	// De quoi récupérer les inputs
	int    get_key(char *buff, int length)
	{
		int nb = read(0, buff, length);
		return (nb);
	}
	void    flush/*print_key*/(void/*char    *buff, int size*/)
	{
		/* printf("lettre : %d, %d, %d, %d\n", buff[0], buff[1], buff[2], size);*/
		fflush(stdout);//vide le tampon de sortie (merci google)
	}

	struct termios    old;
	char            c[3] = {0};
	old = *setup(&old);

	Perso player;
	Perso *playerptr = &player;
	Mob enemy;
	Mob *enemyptr = &enemy;
	int (i) = 0;
	int enemynumber = 0;
	int enemymax = 2;
	int success = 0;
	char buffer = 'a';
	buffer += 0;
	char targetbuffer;
	char *enemyhpbuffer;
	player.hp = 100; // A modifier dans le futur.
	
	while ((player.hp > 0) && (success != 1) /* Condition d'arrêt, à modifier pour la suite.*/)
	{
		if (enemynumber > 0 && enemy.hp <= 0)
			write(1, "\nTu as tue l'ennemi.", 21);
		ft_chose_enemy(enemynumber, enemyptr);
		write(1, "\nUn ennemi attaque, defends-toi !\n", 35);
		while (enemy.hp > 0)
		{
			enemyhpbuffer = ft_itoa(enemy.hp);
			write(1, "\n====================\n", 22);
			write(1, "PV de l'ennemi : ", 18);
			ft_put_str(enemyhpbuffer);
			free(enemyhpbuffer);
			// Affiche les PV de l'ennemi.
			write(1, "\n====================\n", 22);
			ft_show_spells(3/*Nombre de spells actuellement débloqués à ce stade*/);
			write(1, "\nQuel sort utilises-tu ?\n", 26);
			c[0] = 'a';
			while (c[0] < 49 || c[0] > 52)
			{
				get_key(c, 3);
				flush();
				if ((!(c[0] >= 49 && c[0] <= 52)))
				{
					ft_wrong_key(i, enemyptr, playerptr);
					i++;
					buffer = ('Z' - i);
				}
				// Si la touche entrée n'est pas entre 1 et 4, ft_wrong_spell, et on retourne au début de la boucle while. On réaffiche les pv de l'ennemi.
					/* Ce qui suit n'est pas utile dans mon cas je crois.
					if (size)
						print_key(c, size); */ // De quoi voir sur quelle touche j'ai appuyé, à enlever dans la version finale.
						/**/
			}
			// Fin de récupération d'input

			if (c[0] == '2') // On vérifie si le sort Toucher du phenix a été choisi, car il peut être lancé sur soi-même pour se soigner.
			{
				write(1, "\nSur qui l'utiliser ?\n\n1 : Moi\n2 : L'ennemi", 44);
				targetbuffer = 'a';
				c[0] = 'a';
				while (targetbuffer != 'S')
				{
					get_key(c, 3);
					flush();
					if (c[0] != '1' && c[0] != '2')
						write(1, "\nMauvaise touche !\n", 20);
					if (c[0] == 49)
					{
						ft_use_spell('2', enemyptr, playerptr, 1/*Sur le player*/);
						targetbuffer = 'S';
					}
					else if (c[0] == 50)
					{
						ft_use_spell('2', enemyptr, playerptr, 0/*Sur l'ennemi*/);
						targetbuffer = 'S';
					}
				}
			}
			else
				ft_use_spell(c[0], enemyptr, playerptr, 0/*Sur l'ennemi*/);
		}
		enemynumber++;
		if (enemynumber >= enemymax)
			success = 1;
	}
	tcsetattr(STDIN_FILENO, TCSAFLUSH, &old);
	write(1, "\nFIN\n", 5);
}
