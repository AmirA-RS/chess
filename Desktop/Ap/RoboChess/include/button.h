#ifndef BUTTON_H
#define BUTTON_H
#include "SFML/Graphics.hpp"
#include "string"
#include "setting.h"
using namespace std;
using namespace sf;
class Button
{
public:
    sf::RectangleShape exitButtonImage;
    sf::Font font;
    sf::Text startText;
    string directory;
    float exitButtonHeight;
    float exitButtonWidth;
    Button()
    {
        exitButtonImage.setSize(sf::Vector2f(setting::cell_size, setting::cell_size));
        exitButtonImage.setFillColor(sf::Color(168, 168, 10, 80));
        exitButtonImage.setPosition(setting::board_x-100, 0);
        font.loadFromFile("resources/fonts/roboto.ttf");
        exitButtonWidth = exitButtonImage.getLocalBounds().width;
        exitButtonHeight = exitButtonImage.getLocalBounds().height;
    }
    void start()
    {
        startText.setFont( font );
        startText.setStyle( sf::Text::Bold );
        startText.setString("Reset Map");
        startText.setFillColor( sf::Color::Black );
        startText.setCharacterSize( 20 );
        startText.setPosition(setting::board_x-95, 35);
    }
};
#endif