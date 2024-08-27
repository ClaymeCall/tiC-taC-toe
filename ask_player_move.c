#include "main.h"
#include <stdio.h>

/**
 * _atoi - Converts a string to an integer between 1 and 9.
 * @str: String to convert.
 *
 * Return: The resulting int, or -1 if conversion failed.
 */
int _atoi(char *arr)
{
	unsigned int len = 0;

	if (arr == NULL)
		return (-1);

	/* Enforcing single char input */
	while (arr[len])
		++len;
	if (len > 1)
		return (-1);

	/* Checking that input is between 1 and 9 */
	if (arr[0] < '1' || arr[0] > '9')
		return (-1);

	return (arr[0] - '0');
}

/**
 * ask_player_move - Prompts the player to choose its next move.
 *
 * Return: The index of the slot chosen, -1 if wrong input. 
 */
int ask_player_move()
{
	int chosen_slot;
	char user_input[3];

	/* Prompt player to play its move */
	do
	{
		printf("Please enter a number between 1 and 9 :");
		scanf("%s", user_input);
		chosen_slot = _atoi(user_input);
	} while (chosen_slot == -1);

	return (chosen_slot);
}

