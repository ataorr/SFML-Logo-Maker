//
// Created by atao on 6/3/21.
//

#include "gardientBox.h"

gardientBox::gardientBox() {

}

gardientBox::gardientBox(int x, int y) {
    quad = sf::VertexArray(sf::Quads,4);
    quad[1].position = sf::Vector2f(x, y);
    quad[2].position = sf::Vector2f(x+350, y);
    quad[3].position = sf::Vector2f(x+350, y+50);
    quad[0].position = sf::Vector2f(x, y+50);

    quad[0].color = sf::Color::Blue;
    quad[1].color = sf::Color::Blue;
    quad[2].color = sf::Color::Black;
    quad[3].color = sf::Color::Black;

    box.setPosition(x,y);
    box.setFillColor(sf::Color::Transparent);
    box.setSize(sf::Vector2f(350,50));
    box.setOutlineColor(sf::Color::White);
    box.setOutlineThickness(3);
}

void gardientBox::draw(sf::RenderWindow &window) {
    window.draw(box);
    window.draw(quad);
}

sf::RectangleShape gardientBox::getBox() {
    return box;
}

void gardientBox::updateColor(sf::Color color) {
    quad[0].color = color;
    quad[1].color = color;
}