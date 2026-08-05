#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>

void	ft_nom(void);
void	ft_atk(void);

#ifndef STRUCTURES
#define STRUCTURES

typedef struct characters {
	int	hp;
	int	exp;

} Perso;

typedef struct mobs {
	int	hp;
	int	dmg;
	int	def;
} Mob;

#endif
