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

	enter_alt_screen();

	print_board(board);
	while (winner == ' ')
	{
		clear_screen();
		++turn_count;
		print_board(board);

		/* Prompt player to play its move */
		printf("Choose your slot :");
		scanf("%u", &chosen_slot);

		while(place_chip(chosen_slot, curr_player, board) == -2)
		{
			printf("This slot is already taken, choose again :");
			scanf("%u", &chosen_slot);

		}


		if (turn_count >= 3 && check_win(curr_player, board) == 1)
		{
			winner = curr_player;
			printf("%c player wins !\n", winner);
			exit_alt_screen();
			break;
		}

		curr_player = switch_player(curr_player);

		printf("------------------\n");
	}
	return (0);
}
