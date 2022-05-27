#ifndef SETTING_H
#define SETTING_H

#include "SFML/Graphics.hpp"

struct setting
{
    static int board_x;
    static int board_y;
    static int cell_size;
    static int cell_offset;
    static sf::Color cell_color;
    static int line_space;
};

#endif