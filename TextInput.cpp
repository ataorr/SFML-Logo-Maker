//
// Created by atao on 5/23/21.
//

#include "TextInput.h"

void TextInput::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    sf::Vector2i pixelPos = sf::Mouse::getPosition(window);
    sf::Vector2f mousePos = window.mapPixelToCoords(pixelPos);
    if (event.type == sf::Event::MouseButtonPressed){
        if (box.getBox().getGlobalBounds().contains(mousePos))
        cursor.on();
        else cursor.off();
    }

    if (cursor.isenable()&&event.type == sf::Event::TextEntered){
        if (event.text.unicode == 8) {
            type = snapshot.popSnapshot();
            cursor.deleteChar();
        } else {
            type.addEventHandler(window,event);
            cursor.addCharacter();
            snapshot.saveSnapshot(type);
        }
        box.addEventHandler(event);
    }
}

void TextInput::draw(sf::RenderWindow &window) {
    box.draw(window);
    type.draw(window);
    cursor.draw(window);
}

void TextInput::update() {
    type.update();
    cursor.update();
}

void TextInput::updateText(Logo &logo) {
    logo.logotext.setString(type.getString());
    logo.shadow.setString(type.getString());
}

void TextInput::changeText(std::string word) {
    type.setText(word);
}