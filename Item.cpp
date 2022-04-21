//
// Created by atao on 5/14/21.
//

#include "Item.h"

Item::Item() {
    itemName.setFont(staticFont::getFont(staticFont::OPENSANS));
    itemName.setCharacterSize(30);
    itemName.setFillColor(sf::Color::White);
    box.setSize(sf::Vector2f(300,50));
    box.setFillColor(sf::Color::Black);
}

Item::Item(sf::Texture type) {
    icon.setTexture(type);
}

void Item::changeName(std::string name) {
    itemName.setString(name);
}

void Item::changeBoxSize(int width, int height) {
    box.setSize(sf::Vector2f(width,height));
}

std::string Item::getText() {
    return itemName.getString();
}

void Item::changePos(sf::Vector2f newPos) {
    pos = newPos;
    icon.setPosition(pos);
    box.setPosition(pos);
    itemName.setPosition(pos.x+=50,pos.y+=5);
}

void Item::draw(sf::RenderWindow &window) {
    window.draw(box);
    window.draw(itemName);
    window.draw(icon);
}

void Item::setFile(){
    icon.setTexture(Image::getImage(Image::FILE));
    icon.setScale(sf::Vector2f(0.1f,0.1f));
}

void Item::setFolder() {
    icon.setTexture(Image::getImage(Image::FOLDER));
    icon.setScale(sf::Vector2f(0.1f,0.1f));
}

void Item::HighLight(sf::Vector2f mPos) {
    if (box.getGlobalBounds().contains(mPos)) {
        box.setFillColor(sf::Color::Cyan);
    } else {
        box.setFillColor(sf::Color::Black);
    }
}

sf::RectangleShape Item::getBox() {
    return box;
}

void Item::update() {
    icon.setPosition(pos);
}

void Item::fontListSize() {
    box.setOutlineColor(sf::Color::White);
    box.setOutlineThickness(3);
    box.setSize(sf::Vector2f(300,50));
}

bool Item::clickBox(sf::Vector2f mPos) {
    if (box.getGlobalBounds().contains(mPos))
        return true;
    else false;
}