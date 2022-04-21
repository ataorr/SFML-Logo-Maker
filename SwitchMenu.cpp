//
// Created by atao on 5/26/21.
//

#include "SwitchMenu.h"

SwitchMenu::SwitchMenu() {
    title.changeName("Text");
    title.fontListSize();
    text.setPosition(pos.x,pos.y-50);
    addItem("Text");
    addItem("Image");
}

void SwitchMenu::draw(sf::RenderWindow &window) {
    title.draw(window);
    window.draw(text);
    if (enableList)
        list.draw(window);
}

void SwitchMenu::addEventHandler(sf::Event event, sf::RenderWindow &window, Logo &logo) {
    sf::Vector2i pixelPos = sf::Mouse::getPosition(window);
    sf::Vector2f mousePos = window.mapPixelToCoords(pixelPos);
    title.HighLight(mousePos);
    if (event.type == sf::Event::MouseButtonPressed) {
        if (event.mouseButton.button == sf::Mouse::Left) {
            if (enableList)
                list.updateName(mousePos,title);
            mouseClick(mousePos);
        }
    } list.addEventHandler(event,window);
}

void SwitchMenu::update() {
    title.changePos(pos);
    list.changePos(pos);
}

void SwitchMenu::addItem(std::string name) {
    list.addItem(name);
}

void SwitchMenu::mouseClick(sf::Vector2f mPos) {
    if (title.getBox().getGlobalBounds().contains(mPos)){
        enableList = true;
    } else {
        enableList = false;
    }
}

SwitchMenu::Switch SwitchMenu::getSwitch() {
    if (title.getText()=="Text")
        return TEXT;
    else
        return IMAGE;
}