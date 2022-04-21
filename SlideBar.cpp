//
// Created by atao on 5/24/21.
//

#include "SlideBar.h"

SlideBar::SlideBar() {

}

SlideBar::SlideBar(int xPos, int yPos, int width,std::string name) {
    title.setString(name);
    title.setPosition(xPos,yPos-18);
    title.setCharacterSize(35);
    title.setFont(staticFont::getFont(staticFont::OPENSANS));
    title.setFillColor(sf::Color::White);
    dvalue = title;
    dvalue.setPosition(xPos+width+220,yPos-18);
    pos = sf::Vector2f(xPos+200,yPos);
    this->width = width;
    line.setFillColor(sf::Color::White);
    line.setSize(sf::Vector2f(width,5));
    line.setPosition(xPos+200, yPos);
    line.setOrigin(0,-5);
    button.setFillColor(sf::Color::White);
    button.setPosition(pos.x+width/2,pos.y);
    button.setOrigin(5,5);
    box = line;
    box.setSize(sf::Vector2f(width,15));
}

void SlideBar::draw(sf::RenderWindow &window) {
    window.draw(button);
    window.draw(line);
    window.draw(title);
    window.draw(dvalue);
}

void SlideBar::addEventHandler(sf::Event event, sf::RenderWindow &window) {

    if (box.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)
        && sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
    {
        if (sf::Mouse::getPosition(window).x >= pos.x && sf::Mouse::getPosition(window).x <= pos.x + width)
        {
            button.setPosition(sf::Mouse::getPosition(window).x, pos.y);
            value = (0 + ((button.getPosition().x - pos.x) / width * (100 - 0)));
        }
    }
}

void SlideBar::update() {
    dvalue.setString(std::to_string(value-50));
}

int SlideBar::getValue() {
    return value;
}