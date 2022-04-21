//
// Created by atao on 6/4/21.
//

#ifndef FINALPROJ_COLORLIST_H
#define FINALPROJ_COLORLIST_H
#include "FontList.h"
#include "staticColor.h"

class ColorList {
public:
    ColorList();
    ColorList(int x, int y);
    void draw(sf::RenderWindow &window);
    void update();
    staticColor::color getColor(sf::Vector2f mPos);
private:
    int x_index, y_index;
    sf::Color color;
    sf::RectangleShape red, green, blue, pink, white, cyan, yellow;
    sf::RectangleShape box;
    void setSize();
    void setColor();
    void setPos();
};


#endif //FINALPROJ_COLORLIST_H
