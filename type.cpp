//
// Created by atao on 4/8/21.
//

#include "type.h"

Type::Type() {
    text.setPosition(52,852);
    text.setFont(staticFont::getFont(staticFont::OPENSANS));
    text.setCharacterSize(40);
    text.setFillColor(sf::Color::White);
}

void Type::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    input += event.text.unicode;
    text.setString(input);
}

void Type::update() {
}

void Type::draw(sf::RenderWindow& window) {
    window.draw(text);
}

std::string Type::getString() {
    return text.getString();
}

void Type::setText(std::string word) {
    text.setString(word);
}

