#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <termios.h>
#include <time.h>

void	ft_put_str(char *str);
void	ft_anim(int nb, int dealt, int alive, int target);
void	ft_nom(void);
void	ft_atk(void);
char	*ft_itoa(int nb);

#ifndef STRUCTURES
#define STRUCTURES
#define BLANK_TERMINAL write(1, "\033[2J\033[H", 7)
#define PAUSE_100MS 100000000L

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
