//
// Created by atao on 6/2/21.
//

#include "mouseCursor.h"

mouseCursor::mouseCursor() {
    cursor.setFont(staticFont::getFont(staticFont::OPENSANS));
    cursor.setString("|");
    cursor.setCharacterSize(35);
    cursor.setFillColor(sf::Color::Cyan);
}

void mouseCursor::update() {
    time += clock.restart().asSeconds();
    if (time < 0.5)
        cursor.setFillColor(sf::Color::Transparent);
    else
        cursor.setFillColor(sf::Color::Cyan);
    if (time>=1.0) time = 0;
    cursor.setPosition(pos);
}

void mouseCursor::draw(sf::RenderWindow &window) {
    if (isEnable)
        window.draw(cursor);
}

void mouseCursor::changePos(sf::Vector2f pos) {
    cursor.setPosition(pos);
}

bool mouseCursor::isenable() {
    return isEnable;
}

void mouseCursor::on() {
    isEnable = true;
}

void mouseCursor::off() {
    isEnable = false;
}

void mouseCursor::addCharacter() {
    pos.x+=25;
}

void mouseCursor::deleteChar() {
    if (pos.x>=75)
    pos.x-=25;
}


