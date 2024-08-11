#include "main.h"

/**
* print_board - Prints a tic-tac-toe board.
* @board: Board to print.
*
* Return: void.
*/
void print_board(char *board)
{
	int i, j;

	for(i = 0; i < 3; i++)
	{
		printf("  ----------- \n");

		for(j = 0; j < 3; j++)
		{
			printf(" | %c", board[j + (i * 3)]);
		}
		printf(" | \n");
	}
		printf("  ----------- \n");
}
