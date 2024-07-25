#include "ChessBoard.h"
#include <iostream>
#include <iomanip>

ChessBoard::ChessBoard() {
    board.resize(8, std::vector<ChessPiece>(8, ChessPiece()));
    initializeBoard();
}

void ChessBoard::initializeBoard() {
    for (int i = 0; i < 8; ++i) {
        board[1][i] = ChessPiece(PAWN, WHITE);
        board[6][i] = ChessPiece(PAWN, BLACK);
    }
    initializePiece(0, WHITE);
    initializePiece(7, BLACK);
}

bool ChessBoard::isValidMove(Position from, Position to) {
    ChessPiece piece = board[from.row][from.col];
    if (piece.getPiece() == EMPTY) {
        std::cout << "There is no piece at the given position!" << std::endl;
        return false;
    }
    if (piece.getPiece() == PAWN) {
        if (piece.getColor() == WHITE && to.row == from.row + 1 && to.col == from.col) {
            return true;
        }
        if (piece.getColor() == BLACK && to.row == from.row - 1 && to.col == from.col) {
            return true;
        }
    }
    return false;
}

void ChessBoard::movePiece(Position from, Position to) {
    if (isValidMove(from, to)) {
        board[to.row][to.col] = board[from.row][from.col];
        board[from.row][from.col] = ChessPiece();
        std::cout << "Move successful!" << std::endl;
    } else {
        std::cout << "Invalid move!" << std::endl;
    }
}

void ChessBoard::displayBoard() {
    std::cout << "  a b c d e f g h" << std::endl;
    std::cout << " +---------------+" << std::endl;
    for (int i = 0; i < 8; ++i) {
        std::cout << 8 - i << "|";
        for (int j = 0; j < 8; ++j) {
            char symbol = board[i][j].getSymbol();
            std::cout << " " << symbol << " |";
        }
        std::cout << " " << (8 - i) << std::endl;
        std::cout << " +---------------+" << std::endl;
    }
    std::cout << "  a b c d e f g h" << std::endl;
}

void ChessBoard::initializePiece(int row, Color color) {
    board[row][0] = ChessPiece(ROOK, color);
    board[row][1] = ChessPiece(KNIGHT, color);
    board[row][2] = ChessPiece(BISHOP, color);
    board[row][3] = ChessPiece(QUEEN, color);
    board[row][4] = ChessPiece(KING, color);
    board[row][5] = ChessPiece(BISHOP, color);
    board[row][6] = ChessPiece(KNIGHT, color);
    board[row][7] = ChessPiece(ROOK, color);
}
