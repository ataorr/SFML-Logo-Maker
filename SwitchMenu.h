//
// Created by atao on 5/26/21.
//

#ifndef FINALPROJ_SWITCHMENU_H
#define FINALPROJ_SWITCHMENU_H

#include "Menu.h"
#include "Logo.h"

class SwitchMenu {
private:
    sf::Text text =sf::Text("Image/Text:",staticFont::getFont(staticFont::ROBOTO),30);
    sf::Vector2f pos = sf::Vector2f(50,980);
    Item title;
    ItemList list;
    bool enableList = false;
public:
    enum Switch{IMAGE, TEXT};
    SwitchMenu();
    void changeName(std::string name);
    void addItem(std::string name);
    void mouseClick (sf::Vector2f mPos);
    void addEventHandler(sf::Event event, sf::RenderWindow& window,Logo &logo);
    void update();
    void draw(sf::RenderWindow& window);
    void changePos(sf::Vector2f newPos);
    Switch getSwitch();
};

#endif //FINALPROJ_SWITCHMENU_H
