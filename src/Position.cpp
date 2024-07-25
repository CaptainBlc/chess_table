#ifndef CHESSBOARD_H
#define CHESSBOARD_H

#include <vector>
#include "ChessPiece.h"
#include "Position.h"

class ChessBoard {
public:
    ChessBoard();
    void initializeBoard();
    bool isValidMove(Position from, Position to);
    void movePiece(Position from, Position to);
    void displayBoard();

private:
    std::vector<std::vector<ChessPiece>> board;
};

#endif // CHESSBOARD_H
