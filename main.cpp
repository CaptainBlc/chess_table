#include <iostream>
#include "ChessBoard.h"

using namespace std;

int main() {
    ChessBoard board;
    board.displayBoard();

    while (true) {
        string from, to;
        cout << "Enter move (e.g., e2 e4): ";
        cin >> from >> to;

        Position fromPos = {8 - (from[1] - '0'), from[0] - 'a'};
        Position toPos = {8 - (to[1] - '0'), to[0] - 'a'};

        board.movePiece(fromPos, toPos);
        board.displayBoard();
    }

    return 0;
}
