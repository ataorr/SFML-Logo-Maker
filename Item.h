//
// Created by atao on 5/14/21.
//

#ifndef FILETREE_ITEM_H
#define FILETREE_ITEM_H

#include "staticFont.h"
#include "Image.h"
#include <iostream>

class Item{
private:
    sf::Text itemName;
    sf::RectangleShape box;
    sf::Sprite icon;
    sf::Vector2f pos;
public:
    Item();
    Item(sf::Texture type);
    Item(Image::image type);
    void fontListSize();
    void changeBoxSize(int width, int height);
    void changeName(std::string name);
    std::string getText();
    void setFile();
    void update();
    void setFolder();
    void draw(sf::RenderWindow& window);
    void changePos(sf::Vector2f newPos);
    sf::RectangleShape getBox();
    void HighLight(sf::Vector2f mPos);
    bool clickBox(sf::Vector2f mPos);
};


#endif //FILETREE_ITEM_H
