#include "main.h"

/**
* check_win - Checks if a player has won.
* @player: The players symbol to check.
* @board: The board to evaluate.
*
* Return: 0 if nobody has won, 1 if player has won, 2 if draw, -1 otherwise.
*/
int check_win(char player_symbol, char *board)
{
	int i, j, counter;

	/* Check for horizontal win*/
	counter = 0;

	for (i = 0; board[i]; ++i)
	{
		if (i % 3 == 0)
			counter = 0;

		if (board[i] == player_symbol)
			++counter;

		if (counter == 3)
			return (1);
	}

	/* Check for vertical win*/
	counter = 0;

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			if (board[i + (j * 3)] == player_symbol)
				++counter;
		}
		if (counter == 3)
			return (1);

		counter = 0;
	}

	/* Check for ascending diagonal win*/
	counter = 0;

	for (i = 0; i < 3; ++i)
	{
		if (board[2 * (1 + i)] == player_symbol)
			++counter;

		if (counter == 3)
			return (1);
	}

	/* Check for descending diagonal win*/
	counter = 0;

	for (i = 0; i < 3; ++i)
	{
		if (board[i + (i * 3)] == player_symbol)
			++counter;

		if (counter == 3)
			return (1);
	}

	/* Checking for draw */
	counter = 0;

	for (i = 0; i < 9; i ++)
	{
		if(board[i] != ' ')
			++counter;
	}
	if(counter == 9)
		return (2);

	/* Returning error as no valid case was encountered */
	return (-1);
}
