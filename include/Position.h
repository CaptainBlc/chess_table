#ifndef POSITION_H
#define POSITION_H

struct Position {
    int row;
    int col;

    Position(int r = 0, int c = 0) : row(r), col(c) {}
};

#endif // POSITION_H
