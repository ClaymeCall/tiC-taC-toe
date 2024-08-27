#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_board(char *board);
int check_win(char player_symbol, char *board);
int place_chip(unsigned int pos, char chip_symbol, char *board);
char switch_player(char curr_player);
int ask_player_move();

#define clear_screen() puts("\x1B[2J")
#define enter_alt_screen() puts("\033[?1049h\033[H")
#define exit_alt_screen() puts("\033[?1049l")

#endif
