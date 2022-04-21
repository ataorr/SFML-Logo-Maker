//
// Created by atao on 5/26/21.
//

#include "FontList.h"

FontList::FontList() {
    title.changeName("OpenSans");
    title.fontListSize();
    text.setPosition(pos.x,pos.y-50);
    addItem("OpenSans");
    addItem("Arial");
    addItem("Roboto");
    addItem("Oswald");
}

void FontList::draw(sf::RenderWindow &window) {
    title.draw(window);
    window.draw(text);
    if (enableList)
        list.draw(window);
}

void FontList::addEventHandler(sf::Event event, sf::RenderWindow &window, Logo &logo) {
    sf::Vector2i pixelPos = sf::Mouse::getPosition(window);
    sf::Vector2f mousePos = window.mapPixelToCoords(pixelPos);
    title.HighLight(mousePos);
    if (event.type == sf::Event::MouseButtonPressed) {
        if (event.mouseButton.button == sf::Mouse::Left) {
            if (enableList)
            list.updateName(mousePos,title);
            mouseClick(mousePos);
        }
    }
    list.addEventHandler(event,window);
}

void FontList::update() {
    title.changePos(pos);
    list.changePos(pos);
}

void FontList::addItem(std::string name) {
    list.addItem(name);
}

void FontList::mouseClick(sf::Vector2f mPos) {
    if (title.getBox().getGlobalBounds().contains(mPos)){
        enableList = true;
    } else {
        enableList = false;
    };
}

void FontList::updateFont(Logo &logo) {
    std::string temp = title.getText();
    if (temp == "OpenSans"){
        logo.logotext.setFont(staticFont::getFont(staticFont::OPENSANS));
        logo.shadow.setFont(staticFont::getFont(staticFont::OPENSANS));
    } else
    if (temp == "Arial") {
        logo.logotext.setFont(staticFont::getFont(staticFont::ARIAL));
        logo.shadow.setFont(staticFont::getFont(staticFont::ARIAL));
    } else
    if (temp == "Roboto") {
        logo.logotext.setFont(staticFont::getFont(staticFont::ROBOTO));
        logo.shadow.setFont(staticFont::getFont(staticFont::ROBOTO));
    } else
    if (temp == "Oswald") {
        logo.logotext.setFont(staticFont::getFont(staticFont::OSWALD));
        logo.shadow.setFont(staticFont::getFont(staticFont::OSWALD));
    }
}