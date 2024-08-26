#include "main.h"

/**
* switch_player - Switches between two players.
* @curr_player: The current player.
*
* Return: The other player.
*/
char switch_player(char curr_player)
{
	if (curr_player == 'X')
		return ('O');
	else
		return ('X');
}
