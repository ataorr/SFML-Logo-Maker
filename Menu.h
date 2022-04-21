//
// Created by atao on 5/23/21.
//

#ifndef FINALPROJ_MENU_H
#define FINALPROJ_MENU_H
#include "ItemList.h"

class Menu {
protected:
    sf::Vector2f pos;
    Item title;
    ItemList list;
    bool enableList = false;
public:
    Menu();
    Menu(std::string name, sf::Vector2f newPos);
    void changeName(std::string name);
    void addItem(std::string name);
    void mouseClick (sf::Vector2f mPos);
    void addEventHandler(sf::Event event, sf::RenderWindow& window);
    void update();
    void draw(sf::RenderWindow& window);
    void changePos(sf::Vector2f newPos);
    Funtion getState();
};

#endif //FINALPROJ_MENU_H
