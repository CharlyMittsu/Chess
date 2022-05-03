#ifndef piece_h
#define piece_h

#include <string>
using namespace std;

class Piece {
    protected:
        string _name;
        string _look;
        int _coX;
        int _coY;

    public:
        Piece();
        Piece(int x,int y);
        void deplacePiece(int x, int y);
};

#endif