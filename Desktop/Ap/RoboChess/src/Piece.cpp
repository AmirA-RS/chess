#include "Piece.h"
#include "iostream"
#include "vector"
Piece::Piece(const int &x,const int &y)
{
    this->x = x;
    this->y = y;
}
void Piece::move(const int&x, const int&y)
{
    this->x = x;
    this->y = y;
}
void Piece::setMoveNum()
{}
std::map<vector<char>, sf::Texture> Piece_textures;
void Piece::load_texture()
{
    if (Piece_textures.find({type, color}) == Piece_textures.end())
        Piece_textures[{type, color}].loadFromFile(get_Piece_path(type, color));
    this->sprite.setTexture(Piece_textures[{type, color}]);
    float piece_scale_x = (float)setting::cell_size / this->sprite.getTexture()->getSize().x;
    float piece_scale_y = (float)setting::cell_size / this->sprite.getTexture()->getSize().y;
    this->sprite.setScale(piece_scale_x, piece_scale_y);
}
void Pawn::setMoveNum()
{
    if((x == 6 && color == 'W') || (x==1 && color == 'B'))
    {
        moveNum = 2;
    }
    else
        moveNum = 1;
}
Pawn::Pawn(const int &x,const int &y, const char& col): Piece(x, y)
{
    type = 'P';
    color = col;
    setMoveNum();
    load_texture();
}
void Rook::setMoveNum()
{
    moveNum = 4;
}
Rook::Rook(const int &x,const int &y, const char& col): Piece(x, y)
{
    type = 'R';
    color = col;
    setMoveNum();
    load_texture();
} 
void Knight::setMoveNum()
{
    moveNum = 8;
}
Knight::Knight(const int &x,const int &y, const char& col): Piece(x, y)
{
    type = 'N';
    color = col;
    setMoveNum();
    load_texture();
} 
void King::setMoveNum()
{
    moveNum = 8;
}
King::King(const int &x,const int &y, const char& col): Piece(x, y)
{
    type = 'K';
    color = col;
    setMoveNum();
    load_texture();
} 
void Bishop::setMoveNum()
{
    moveNum = 4; 
}
Bishop::Bishop(const int &x,const int &y, const char& col): Piece(x, y)
{
    type = 'B';
    color = col;
    setMoveNum();
    load_texture();
} 
void Queen::setMoveNum()
{
    moveNum = 8;
}
Queen::Queen(const int &x,const int &y, const char& col): Piece(x, y)
{
    type = 'Q';
    color = col;
    setMoveNum();
    load_texture();
}  