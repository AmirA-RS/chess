#include "xo.h"
std::map<char[2], sf::Texture> xo_textures;

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
void Piece::load_texture()
{
    if (xo_textures.find({type, color}) == xo_textures.end())
        xo_textures[{type, color}].loadFromFile(get_xo_path(type, color));
    this->sprite.setTexture(xo_textures[{type, color}]);
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
}  