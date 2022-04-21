//
// Created by atao on 4/8/21.
//

#ifndef TEXTEDITOR_TEXTBOX_H
#define TEXTEDITOR_TEXTBOX_H

#include "staticFont.h"
#include <sfml/graphics.hpp>

class textbox{
private:
    sf::RectangleShape box;
    sf::Font font;
    sf::Text text;
    int box_height = 60;
    int box_width = 600;
public:
    textbox();
    void addEventHandler(sf::Event event);
    void draw(sf::RenderTarget& window);
    sf::RectangleShape getBox();
};

#endif //TEXTEDITOR_TEXTBOX_H
