#include "helper.h"
#include "iostream"
sf::Vector2f get_cell_position(int row,int column)
{
    return sf::Vector2f(
        setting::cell_offset + column * ( setting::cell_size + setting::line_space),
        setting::cell_offset + row * ( setting::cell_size + setting::line_space));
}

string get_xo_path(const char&type, const char&color)
{
    string path = "resources/images/"; 
    path += type;
    path += color;
    return path + ".png";
}

int get_cell_index(int x)
{
    x -= setting::cell_offset;
    if (x<0)
        return -1;
    int cell_plus_space = setting::cell_size + setting::line_space;
    int index = x / cell_plus_space;
    if (index > 8 || x > index * cell_plus_space + setting::cell_size)
        return -1;
    return index;
}

string get_name_of_id(char color)
{
    return color == 'W' ? "White" : "Black";
}