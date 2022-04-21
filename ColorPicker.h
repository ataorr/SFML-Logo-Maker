//
// Created by atao on 6/3/21.
//

#ifndef DEMO_COLORPICKER_H
#define DEMO_COLORPICKER_H
#include "gardientBox.h"
#include "ColorList.h"

class ColorPicker {
public:
    enum status{Off,colorList, colorBox};
    ColorPicker();
    ColorPicker(int x, int y, std::string name, bool white);
    void draw(sf::RenderWindow &window);
    void addEventHandler(sf::Event event, sf::RenderWindow &window);
    void update();
    void updateColor(sf::Vector2f mPos);
    sf::Color getColor();
private:
    sf::Text text;
    status state = Off;
    int x_index, y_index;
    gardientBox box;
    staticColor::color c = staticColor::White;
    sf::RectangleShape demo;
    ColorList colorlist;
};


#endif //DEMO_COLORPICKER_H
