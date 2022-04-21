//
// Created by atao on 4/8/21.
//

#ifndef TEXTEDITOR_TYPE_H
#define TEXTEDITOR_TYPE_H

#include "EventHandler.h"
#include "staticFont.h"
#include "mouseCursor.h"
#include <iostream>

class Type : EventHandle{
private:
    sf::Text text;
    sf::String input;
public:
    Type();
    void addEventHandler(sf::RenderWindow& window, sf::Event event);
    void update();
    std::string getString();
    void setText(std::string word);
    void draw(sf::RenderWindow& window);
};

#endif //TEXTEDITOR_TYPE_H
