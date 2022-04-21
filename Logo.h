//
// Created by atao on 5/23/21.
//

#ifndef FINALPROJ_LOGO_H
#define FINALPROJ_LOGO_H
#include "SFML/Graphics.hpp"
#include "staticFont.h"

struct Logo {
    sf::Color color = sf::Color::White;
    sf::Text logotext;
    sf::Sprite icon;
    sf::RectangleShape box;
    sf::Text shadow;
    Logo();
};

#endif //FINALPROJ_LOGO_H
