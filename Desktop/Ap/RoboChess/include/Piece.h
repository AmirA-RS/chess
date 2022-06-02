#ifndef Piece_H
#define Piece_H

#include <SFML/Graphics.hpp>
#include "helper.h"
#include "setting.h"
class Piece
{
    public:
        sf::Sprite sprite;
        vector<vector<int>> danger;
        vector<vector<int>> attacking;
        char type;
        int x;
        int y;
        char color;
        int moveNum;
        Piece(const int &x,const int &y);
        void move(const int&x, const int&y);
        virtual void setMoveNum();
        void load_texture();
};
class Pawn: public Piece
{
    public:
        void setMoveNum() override;    
        Pawn(const int &x,const int &y, const char& col);
};
class Rook: public Piece
{
    public:
        void setMoveNum() override;
        Rook(const int &x,const int &y, const char& col);            
};
class Knight: public Piece
{
    public:
        void setMoveNum() override;
        Knight(const int &x,const int &y, const char& col);    
};
class King: public Piece
{
    public:
        void setMoveNum() override;
        King(const int &x,const int &y, const char& col);     
};
class Bishop: public Piece
{
    public:
        void setMoveNum() override;
        Bishop(const int &x,const int &y, const char& col);     
};
class Queen: public Piece
{
    public:
        void setMoveNum() override;
        Queen(const int &x,const int &y, const char& col);     
};
#endif