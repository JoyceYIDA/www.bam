#define _CRT_SECURE_NO_WARNINGS 1

#ifndef _GAME_H__
#define _GAME_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2
#define EASYCOUNT 10

void initboard(char board[ROWS][COLS], int rows, int cols,char set);
void displayboard(char board[ROWS][COLS],int row,int col);
void setmine(char board[ROWS][COLS], int row, int col);
void findmine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);
int getmine(char mine[ROWS][COLS], int x, int y);

#endif