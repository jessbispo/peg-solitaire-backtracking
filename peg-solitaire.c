int board[7][7] = { //ta fixo aqui mas eh melhor mudar os valores p var
    {-1, -1, 1, 1, 1, -1, -1},
    {-1, -1, 1, 1, 1, -1, -1},
    { 1,  1, 1, 1, 1,  1,  1},
    { 1,  1, 1, 0, 1,  1,  1},
    { 1,  1, 1, 1, 1,  1,  1},
    {-1, -1, 1, 1, 1, -1, -1},
    {-1, -1, 1, 1, 1, -1, -1}
};

int is_valid_move(int board[7][7], int x, int y, int dx, int dy) {
    if (x + 2*dx < 0 || x + 2*dx >= 7 || y + 2*dy < 0 || y + 2*dy >= 7)
        return 0;
    return board[x][y] == 1 && 
           board[x + dx][y + dy] == 1 && 
           board[x + 2*dx][y + 2*dy] == 0;
}


