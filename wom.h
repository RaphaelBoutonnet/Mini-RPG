#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stddef.h>
#include <fcntl.h>
#include <termios.h>
#include <time.h>

#ifndef STRUCTURES
#define STRUCTURES
#define BLANK_TERMINAL write(1, "\033[2J\033[H", 7)
#define PAUSE_100MS 100000000L
#define PAUSE_1S 999999999L

typedef struct characters {
	char 	name[30];
	int	hp;
	int	exp;

} Perso;

typedef struct mobs {
	int	hp;
	int	dmg;
	int	def;
} Mob;

#endif

void	ft_enemy_atk(Mob *enemyptr, Perso *playerptr);
void	ft_put_str(char *str);
void	ft_anim(int nb, int dealt, int alive, int target);
char	*ft_nom(void);
void	ft_atk(char *nomperso);
char	*ft_itoa(int nb);
void	ft_wait_one_sec(void);
