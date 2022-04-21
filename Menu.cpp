//
// Created by atao on 5/23/21.
//

#include "Menu.h"

Menu::Menu() {

}

Menu::Menu(std::string name,sf::Vector2f newPos) {
    title.changeName(name);
    title.changeBoxSize(250,50);
    pos = newPos;
}

void Menu::changeName(std::string name) {
    title.changeName(name);
}

void Menu::addItem(std::string name) {
    list.addItem(name);
}

void Menu::draw(sf::RenderWindow &window) {
    title.draw(window);
    if (enableList)
    list.draw(window);
}

void Menu::addEventHandler(sf::Event event, sf::RenderWindow &window) {
    sf::Vector2i pixelPos = sf::Mouse::getPosition(window);
    sf::Vector2f mousePos = window.mapPixelToCoords(pixelPos);
    title.HighLight(mousePos);
    if (event.type == sf::Event::MouseButtonPressed) {
        if (event.mouseButton.button == sf::Mouse::Left) {
            mouseClick(mousePos);
        }
    }
    list.addEventHandler(event,window);
}

void Menu::changePos(sf::Vector2f newPos) {

}

void Menu::update() {
    title.changePos(pos);
    list.changePos(pos);
}

void Menu::mouseClick(sf::Vector2f mPos) {
    if (title.getBox().getGlobalBounds().contains(mPos)){
        enableList = true;
    } else {
        enableList = false;
    };
}

Funtion Menu::getState(){
    return list.getState();
}