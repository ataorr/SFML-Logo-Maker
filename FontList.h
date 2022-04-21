//
// Created by atao on 5/26/21.
//

#ifndef FINALPROJ_FONTLIST_H
#define FINALPROJ_FONTLIST_H
#include "Menu.h"
#include "Logo.h"

class FontList {
private:
    sf::Text text =sf::Text("Text Font:",staticFont::getFont(staticFont::ROBOTO),30);
    sf::Vector2f pos = sf::Vector2f(370,980);
    Item title;
    ItemList list;
    bool enableList = false;
public:
    FontList();
    FontList(std::string name, sf::Vector2f newPos);
    void changeName(std::string name);
    void addItem(std::string name);
    void mouseClick (sf::Vector2f mPos);
    void addEventHandler(sf::Event event, sf::RenderWindow& window,Logo &logo);
    void updateFont(Logo &logo);
    void update();
    void draw(sf::RenderWindow& window);
    void changePos(sf::Vector2f newPos);
};


#endif //FINALPROJ_FONTLIST_H
