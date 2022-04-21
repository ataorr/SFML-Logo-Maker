//
// Created by atao on 5/23/21.
//

#include "ItemList.h"

ItemList::ItemList() {
    pos.x = 0;
    pos.y = 0;
}

void ItemList::draw(sf::RenderWindow &window) {
    for (int i = 0; i < list.size(); ++i) {
        list[i].draw(window);
    }
}

void ItemList::addItem(std::string name) {
    Item temp;
    temp.changeName(name);
    list.push_back(temp);
}

void ItemList::addEventHandler(sf::Event event, sf::RenderWindow& window) {
    sf::Vector2i pixelPos = sf::Mouse::getPosition(window);
    sf::Vector2f mousePos = window.mapPixelToCoords(pixelPos);
    for (int i = 0; i < list.size();i++){
        list[i].HighLight(mousePos);
        if (event.type == sf::Event::MouseButtonPressed){
            if (list[i].clickBox(mousePos)){
                changeState(list[i].getText());
            }
        }
    }
}

Funtion ItemList::getState() {
    if (state == OpenFile){
        state = None;
        return OpenFile;
    } else if (state == Render){
        //std::cout << "test";
        state = None;
        return Render;
    } else if (state == Close){
        state = None;
        return Close;
    } else return None;
}

void ItemList::update() {
    sf::Vector2f tempPos = pos;
    for (int i = 0; i < list.size(); ++i) {
        tempPos.y+=50;
        list[i].changePos(tempPos);
    }
}

void ItemList::changePos(sf::Vector2f newPos) {
    sf::Vector2f tempPos = newPos;
    for (int i = 0; i < list.size(); ++i) {
        tempPos.y+=50;
        list[i].changePos(tempPos);
    }
}

void ItemList::updateName(sf::Vector2f mPos, Item &title) {
    for (int i = 0; i < list.size(); ++i) {
        if (list[i].getBox().getGlobalBounds().contains(mPos)){
            title.changeName(list[i].getText());
        }
    }
}

void ItemList::changeState(std::string text) {
    if (text == "Open Project")
        state = OpenFile;
    else if (text == "Export Image")
        state = Render;
    else if (text == "Close Project")
        state = Close;
}