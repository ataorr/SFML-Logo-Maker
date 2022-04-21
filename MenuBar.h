//
// Created by atao on 5/23/21.
//

#ifndef FINALPROJ_MENUBAR_H
#define FINALPROJ_MENUBAR_H
#include "Menu.h"
#include "MenuFunctionalities.h"
#include "TextInput.h"

class MenuBar{
private:
    sf::Vector2f pos = sf::Vector2f (0, 0);
    std::vector<Menu> menubar;
    MenuFunctionalities funtion;
    Funtion state = None;
public:
    MenuBar();
    void addItem(std::string name, sf::Vector2f pos);
    void draw(sf::RenderWindow& window);
    void addEventHandler(sf::Event event, sf::RenderWindow& outwindow);
    void update();
    void logoUpdate(TextInput &input);
};

#endif //FINALPROJ_MENUBAR_H
