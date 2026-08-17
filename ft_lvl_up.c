#include "wom.h"

void	ft_lvl_up(void)
{
	BLANK_TERMINAL;
	write(1, "\n\n\n       \033[45mLVL UP", 22);
	write(1, "\033[0m", 5);
	write(1, "\n\n\n   \033[45mTU AS DEBLOQUE", 25);
	write(1, "\033[0m", 5);
	write(1, "\n\n\n   \033[45mUN NOUVEAU SORT", 26);
	write(1, "\033[0m", 5);
	ft_wait_one_sec();
	ft_wait_one_sec();
	BLANK_TERMINAL;
}
