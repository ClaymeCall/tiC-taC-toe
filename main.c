#include "main.h"
#include <stdio.h>

/**
* main - Entry point for tiC-taC-toe.
*
* Return: 0 for success.
*/
int main(void)
{
	char board[10] = "         ";
	char winner = ' ', curr_player = 'X';
	unsigned int chosen_slot = 0, turn_count = 0;

	while (winner == ' ')
	{
		++turn_count;
		print_board(board);
		printf("Choose your slot :");
		scanf("%u", &chosen_slot);

		place_chip(chosen_slot, curr_player, board);

		if (turn_count >= 3 && check_win(curr_player, board) == 1)
		{
			print_board(board);
			winner = curr_player;
			printf("%c player wins !\n", winner);
			break;
		}

		curr_player = switch_player(curr_player);

		printf("------------------");
	}
	return (0);
}
