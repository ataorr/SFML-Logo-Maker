//
// Created by atao on 4/8/21.
//

#include "textbox.h"

textbox::textbox(){
    text.setPosition(50,800);
    text.setString("Logo Text:");
    text.setFont(staticFont::getFont(staticFont::ROBOTO));
    text.setFillColor(sf::Color::White);
    box.setSize(sf::Vector2f(box_width,box_height));
    box.setFillColor(sf::Color::Black);
    box.setOutlineColor(sf::Color::White);

    box.setOutlineThickness(5);
    box.setPosition(50,850);
}

void textbox::draw(sf::RenderTarget& window){
    window.draw(box);
    window.draw(text);
}

void textbox::addEventHandler(sf::Event event) {
}

sf::RectangleShape textbox::getBox() {
    return box;
}
