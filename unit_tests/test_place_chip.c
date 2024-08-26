#include "../main.h"

int main()
{
	int res;
	char *test_board = malloc(10);
	char *tmp_board = malloc(11);

	if (!test_board || !tmp_board)
		return (-1);

	strcpy(test_board, "X OOX OX ");

	/* Testing placement in empty position */
	printf("\nTesting placement in empty position\n");
	print_board(test_board);
	res = place_chip(1, 'X', test_board);
	print_board(test_board);

	if (res == 1 && test_board[1] == 'X')
		printf("Successfully placed an X at index 1\n");
	else
		printf("Failed to place X at index 1\n");
		

	/* Testing passing wrong boards to function */
	printf("\nTesting passing wrong boards to function\n");
	print_board(test_board);
	res = place_chip(5, 'X', NULL);

	if (res == -1)
		printf("Successfully handled NULL board pointer\n");
	else
		printf("Failed to handle NULL pointer board");

	strcpy(tmp_board, "0123 5678!");
	print_board(tmp_board);
	res = place_chip(4, 'X', tmp_board);

	if (res == -1)
		printf("Successfully handled wrong board size\n");
	else
		printf("Failed to handle wrong board size\n");

	res = place_chip(10, 'X', tmp_board);

	if (res == -1)
		printf("Successfully handled wrong position index\n");
	else
		printf("Failed to handle wrong position index");

	return (0);
}
