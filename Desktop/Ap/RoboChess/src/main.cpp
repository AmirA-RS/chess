#include "board.h"
#include "iostream"
using namespace sf;

int main()
{
    RenderWindow window(VideoMode(setting::board_x, setting::board_y), "Robo Chess", Style::Titlebar | Style::Close);
    Board board(&window);
    board.run();
}