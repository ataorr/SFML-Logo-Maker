//
// Created by atao on 5/23/21.
//

#include "Logo.h"

Logo::Logo() {
    logotext.setFont(staticFont::getFont(staticFont::OPENSANS));
    logotext.setCharacterSize(60);
    logotext.setPosition(750,350);
    box.setPosition(0,60);
    color.a = 60;
    box.setOutlineColor(sf::Color::White);
    box.setOutlineThickness(5);
    box.setSize(sf::Vector2f(1600,700));
    box.setFillColor(sf::Color(50,50,50,50));
    shadow.setFont(staticFont::getFont(staticFont::OPENSANS));
    shadow.setCharacterSize(100);
    shadow.setPosition(550,550);
    shadow.setColor(color);
    shadow.setScale(1.2,-0.5);
}