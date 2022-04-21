//
// Created by atao on 6/3/21.
//

#include "staticColor.h"

std::map<staticColor::color,sf::Color> staticColor::colors;

sf::Color& staticColor::getColor(color color) {
    setColor(color);
    return colors[color];
}

void staticColor::setColor(color color){
    switch (color) {
        case Red: colors[color] = sf::Color::Red;break;
        case Green: colors[color] = sf::Color::Green;break;
        case Blue: colors[color] = sf::Color::Blue;break;
        case Pink: colors[color] = sf::Color::Magenta;break;
        case White: colors[color] = sf::Color::White;break;
        case Cyan: colors[color] = sf::Color::Cyan;break;
        case Yellow: colors[color] = sf::Color::Yellow;break;
    }
}