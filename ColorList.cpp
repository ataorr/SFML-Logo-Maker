//
// Created by atao on 6/4/21.
//

#include "ColorList.h"

ColorList::ColorList() {
    setSize();
    setColor();
    setPos();
}

ColorList::ColorList(int x, int y) {
    x_index=x;y_index=y;
    setSize();
    setColor();
    setPos();

    box.setPosition(x_index-5,y_index-5);
    box.setFillColor(sf::Color::Black);
    box.setSize(sf::Vector2f(200,100));
    box.setOutlineThickness(2);
    box.setOutlineColor(sf::Color::White);
}

void ColorList::setSize() {
    sf::Vector2f size = sf::Vector2f(40,40);
    red.setSize(size);
    green.setSize(size);
    blue.setSize(size);
    yellow.setSize(size);
    white.setSize(size);
    cyan.setSize(size);
    pink.setSize(size);
}

void ColorList::setColor() {
    red.setFillColor(sf::Color::Red);
    green.setFillColor(sf::Color::Green);
    blue.setFillColor(sf::Color::Blue);
    pink.setFillColor(sf::Color::Magenta);
    white.setFillColor(sf::Color::White);
    yellow.setFillColor(sf::Color::Yellow);
    cyan.setFillColor(sf::Color::Cyan);
}

void ColorList::setPos() {
    red.setPosition(x_index,y_index);
    green.setPosition(x_index+50,y_index);
    blue.setPosition(x_index+100,y_index);
    yellow.setPosition(x_index+150,y_index);
    white.setPosition(x_index,y_index+50);
    cyan.setPosition(x_index+50,y_index+50);
    pink.setPosition(x_index+100,y_index+50);
}

void ColorList::draw(sf::RenderWindow &window) {
    window.draw(box);
    window.draw(red);
    window.draw(green);
    window.draw(blue);
    window.draw(pink);
    window.draw(white);
    window.draw(yellow);
    window.draw(cyan);
}

staticColor::color ColorList::getColor(sf::Vector2f mPos) {
    if (red.getGlobalBounds().contains(mPos))
        return staticColor::Red;
    if (green.getGlobalBounds().contains(mPos))
        return staticColor::Green;
    if (blue.getGlobalBounds().contains(mPos))
        return staticColor::Blue;
    if (pink.getGlobalBounds().contains(mPos))
        return staticColor::Yellow;
    if (white.getGlobalBounds().contains(mPos))
        return staticColor::White;
    if (cyan.getGlobalBounds().contains(mPos))
        return staticColor::Cyan;
    if (yellow.getGlobalBounds().contains(mPos))
        return staticColor::Yellow;
}