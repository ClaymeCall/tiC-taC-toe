#include "main.h"

/**
* place_chip - Places a chip in a tic tac toe board.
* @pos: Position to place the chip in.
* @chip_symbol: Symbol of the chip to be placed.
* @board: Board to place a chip in.
*
* Return: 1 if success, -1 if incorrect args, -2 if slot is not empty.
*/
int place_chip(unsigned int pos, char chip_symbol, char *board)
{
	unsigned int board_slots = 0;
	unsigned int index = pos - 1;

	/* Testing validity of args */
	if (index > 8 || board == NULL)
		return (-1);

	while (board[board_slots])
		++board_slots;

	if (board_slots != 9)
		return (-1);

	/* Checking if chosen slot is empty */
	if (board[index] == ' ')
		board[index] = chip_symbol;
	else
		return (-2);

	return (1);
}
