#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_board(char *board);
int check_win(char player_symbol, char *board);
int place_chip(unsigned int pos, char chip_symbol, char *board);
char switch_player(char curr_player);

#endif
