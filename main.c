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
	int placing_res = 0;

	enter_alt_screen();

	print_board(board);
	while (winner == ' ')
	{
		clear_screen();
		++turn_count;
		print_board(board);

		do 
		{
			/* Prompt player to play its move */
			if( placing_res == 0)
				printf("Choose your slot :");
			scanf("%u", &chosen_slot);

			placing_res = place_chip(chosen_slot, curr_player, board);

			if(placing_res == -1)
				printf("Slot number must be between 1 and 9");
			else if(placing_res == -2)
				printf("This slot is already taken, choose again :");
		}
		while (placing_res <= 0);

		if (check_win(curr_player, board) == 1)
		{
			winner = curr_player;
			printf("%c player wins !\n", winner);
			exit_alt_screen();
			break;
		}
		else if(check_win(curr_player, board) == 2)
		{
			printf("The game is a draw.\n");
			exit_alt_screen();
			break;
		}

		curr_player = switch_player(curr_player);

		printf("------------------\n");
	}
	return (0);
}
