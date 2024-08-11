#include "main.h"

int main()
{
	char *testboard;

	/* Checking horizontal win detection */
	printf("\nChecking horizontal win detection\n");

	/* First row */	
	testboard = "XXX      ";
	print_board(testboard);
	if (check_win('X', testboard))
	{
		printf("\tFirst row win detected\n");
	}

	/* Second row */	
	testboard = "   XXX   ";
	print_board(testboard);
	if (check_win('X', testboard))
	{
		printf("\tSecond row win detected\n");
	}

	/* Third row */	
	testboard = "      XXX";
	print_board(testboard);
	if (check_win('X', testboard))
	{
		printf("\tThird row win detected\n");
	}

	/* Checking vertical win detection */
	printf("\nChecking vertical win detection\n");

	/* First col */	
	testboard = "X  X  X  ";
	print_board(testboard);
	if (check_win('X', testboard))
	{
		printf("\tFirst col win detected\n");
	}

	/*Second col */	
	testboard = " X  X  X ";
	print_board(testboard);
	if (check_win('X', testboard))
	{
		printf("\tSecond col win detected\n");
	}

	/* Third col */	
	testboard = "  X  X  X";
	print_board(testboard);
	if (check_win('X', testboard))
	{
		printf("\tThird col win detected\n");
	}


	/* Checking ascending diagonal win detection */
	printf("\nChecking ascending diag win detection\n");

	testboard = "  X X X  ";
	print_board(testboard);
	if (check_win('X', testboard))
	{
		printf("\tAscending diag win detected\n");
	}

	/* Checking descending diagonal win detection */
	printf("\nChecking descending diag win detection\n");

	testboard = "X   X   X";
	print_board(testboard);
	if (check_win('X', testboard))
	{
		printf("\tDescending diag win detected\n");
	}

	/* Checking for draw detection */
	printf("\nChecking for draw detection\n");

	testboard = "XXOOXXXOO";
	print_board(testboard);
	if (check_win('X', testboard) == 0)
	{
		printf("\tNo win detected in draw game\n");
	}

	return (0);
}
