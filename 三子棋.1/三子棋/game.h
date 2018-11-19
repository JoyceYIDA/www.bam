
#ifndef _GAME_H__
#define _GAME_H__
#define ROW 3
#define COL 3
void initboard(char board[ROW][COL]);
void displayboard(char board[ROW][COL]);
void playermove(char board[ROW][COL]);
void computermove(char board[ROW][COL]);
char win(char board[ROW][COL]);
int full(char board[ROW][COL]);
#endif