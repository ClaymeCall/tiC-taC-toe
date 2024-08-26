#include "../main.h"

int main(void)
{
	char curr_player = 'X';

	printf("Player before switch : %c\n", curr_player);
	curr_player = switch_player(curr_player);
	printf("Player after switch 1: %c\n", curr_player);
	curr_player = switch_player(curr_player);
	printf("Player after switch 2 : %c\n", curr_player);

	return (0);
}
