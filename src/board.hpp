#include <bits/stdc++.h>
using namespace std;
enum peciesnames
{
    bpawn,
    wpawn,
    brook,
    wrook,
    bhorse,
    whorse,
    bknight,
    wknight,
    bqueen,
    wqueen,
    bking,
    wking,
    noone
};
struct cordinate
{
    char first;
    int second;
};
peciesnames chess_board[8][8];
class board
{
    void init_board()
    {
        for (int i = 0; i < 8; i++)
        {
            chess_board[1][i] = wpawn;
            chess_board[6][i] = bpawn;
            chess_board[2][i] = noone;
            chess_board[3][i] = noone;
            chess_board[4][i] = noone;
            chess_board[5][i] = noone;
        }
        // rooks
        chess_board[0][0] = wrook;
        chess_board[0][7] = wrook;
        chess_board[7][0] = brook;
        chess_board[7][7] = brook;

        // horse
        chess_board[0][1] = whorse;
        chess_board[0][6] = whorse;
        chess_board[7][1] = bhorse;
        chess_board[7][6] = bhorse;

        // knight
        chess_board[0][2] = wknight;
        chess_board[0][5] = wknight;
        chess_board[7][2] = bknight;
        chess_board[7][5] = bknight;

        // queen
        chess_board[0][3] = wqueen;
        chess_board[7][3] = bqueen;

        // king
        chess_board[0][4] = wking;
        chess_board[7][4] = bking;
    }
};