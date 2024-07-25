#include "ChessPiece.h"

ChessPiece::ChessPiece(Piece p, Color c) : piece(p), color(c) {}

char ChessPiece::getSymbol() const {
    if (piece == EMPTY) return ' ';
    if (color == WHITE) {
        switch (piece) {
            case PAWN: return 'P';
            case KNIGHT: return 'N';
            case BISHOP: return 'B';
            case ROOK: return 'R';
            case QUEEN: return 'Q';
            case KING: return 'K';
            default: return ' ';
        }
    } else {
        switch (piece) {
            case PAWN: return 'p';
            case KNIGHT: return 'n';
            case BISHOP: return 'b';
            case ROOK: return 'r';
            case QUEEN: return 'q';
            case KING: return 'k';
            default: return ' ';
        }
    }
}

Color ChessPiece::getColor() const {
    return color;
}

Piece ChessPiece::getPiece() const {
    return piece;
}
