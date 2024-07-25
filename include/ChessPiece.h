#ifndef CHESSPIECE_H
#define CHESSPIECE_H

enum Piece {
    EMPTY, PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING
};

enum Color {
    NONE, WHITE, BLACK
};

class ChessPiece {
public:
    ChessPiece(Piece p = EMPTY, Color c = NONE);
    char getSymbol() const;
    Color getColor() const;
    Piece getPiece() const;

private:
    Piece piece;
    Color color;
};

#endif
