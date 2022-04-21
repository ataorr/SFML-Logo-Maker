//
// Created by atao on 5/23/21.
//

#ifndef FINALPROJ_ITEMLIST_H
#define FINALPROJ_ITEMLIST_H
#include "Item.h"
#include "FileNode.h"

enum Funtion{None, OpenFile, Render, Close, NewFile};

class ItemList {
private:
    sf::Vector2f pos;
    std::vector<Item> list;
    Funtion state = None;
public:
    ItemList();
    ItemList(sf::Vector2f newPos);
    void updateName(sf::Vector2f mPos, Item &title);
    void draw(sf::RenderWindow& window);
    void changePos(sf::Vector2f newPos);
    void addEventHandler(sf::Event event, sf::RenderWindow& window);
    void update();
    void addItem(std::string name);
    void changeState(std::string text);
    Funtion getState();
};

#endif //FINALPROJ_ITEMLIST_H
