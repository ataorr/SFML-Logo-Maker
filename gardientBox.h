//
// Created by atao on 6/3/21.
//

#ifndef DEMO_GARDIENTBOX_H
#define DEMO_GARDIENTBOX_H
#include <SFML/Graphics.hpp>
#include <iostream>
#include "staticColor.h"

class gardientBox {
private:
    sf::VertexArray quad;
    sf::Color color;
    sf::RectangleShape box;
public:
    gardientBox();
    gardientBox(int x, int y);
    void changeColor(sf::Color color);
    void updateColor(sf::Color color);
    void draw(sf::RenderWindow &window);
    sf::RectangleShape getBox();
};


#endif //DEMO_GARDIENTBOX_H
