//
// Created by atao on 6/2/21.
//

#ifndef FINALPROJ_MOUSECURSOR_H
#define FINALPROJ_MOUSECURSOR_H
#include <SFML/Graphics.hpp>
#include "staticFont.h"


class mouseCursor {
private:
    sf::Vector2f pos = sf::Vector2f (52,852);
    sf::Text cursor;
    sf::Clock clock;
    float time = 0.0;
    bool isEnable = false;
public:
    mouseCursor();
    void addEventHandler(sf::Event event, sf::RenderWindow &window);
    void draw(sf::RenderWindow &window);
    void update();
    void changePos(sf::Vector2f pos);
    void addCharacter();
    void deleteChar();
    bool isenable();
    void on();
    void off();
};


#endif //FINALPROJ_MOUSECURSOR_H
