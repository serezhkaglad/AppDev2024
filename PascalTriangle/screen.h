#pragma once

// define all the color as constants
enum COLORS {BLACK=30, RED, GREEN, YELLOW, BLUE, MAGENTA, CYAN, WHITE};

//function declarations
void setFGcolor(int);
void clearScreen(void);
void gotoXY(int,int);
void resetColors(void);