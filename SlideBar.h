//
// Created by atao on 5/24/21.
//

#ifndef SLIDEBAR_SLIDEBAR_H
#define SLIDEBAR_SLIDEBAR_H

#include <SFML/Graphics.hpp>
#include "iostream"
#include "staticFont.h"

class SlideBar {
private:
    int width;
    int value = 50;
    sf::Text title;
    sf::Text dvalue;
    sf::RectangleShape line;
    sf::RectangleShape box;
    sf::CircleShape button = sf::CircleShape(15.f);
    sf::Vector2f pos;
public:
    SlideBar();
    SlideBar(int xPos, int yPos, int width, std::string name);
    void draw(sf::RenderWindow &window);
    void addEventHandler(sf::Event event, sf::RenderWindow &window);
    void update();
    int getValue();
};


#endif //SLIDEBAR_SLIDEBAR_H
