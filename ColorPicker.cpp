//
// Created by atao on 6/3/21.
//

#include "ColorPicker.h"

ColorPicker::ColorPicker() {

}

ColorPicker::ColorPicker(int x, int y, std::string name, bool white) {
    x_index = x; y_index = y;
    demo.setSize(sf::Vector2f(50, 50));
    demo.setPosition(x_index, y_index);
    if (white) demo.setFillColor(sf::Color::White);
    else demo.setFillColor(sf::Color::Black);
    demo.setOutlineColor(sf::Color::Cyan);
    demo.setOutlineThickness(3);

    text.setFont(staticFont::getFont(staticFont::ROBOTO));
    text.setCharacterSize(30);
    text.setPosition(x_index-5,y_index-50);
    text.setString(name);

    box  = gardientBox(x_index,y_index+70);
    colorlist = ColorList(x_index,y_index+70);
}

void ColorPicker::draw(sf::RenderWindow &window) {
    window.draw(demo);
    window.draw(text);
    switch (state) {
        case Off:
            break;
        case colorList:
            colorlist.draw(window);
            break;
        case colorBox:
            box.draw(window);
            break;
    }
}

void ColorPicker::addEventHandler(sf::Event event, sf::RenderWindow &window) {
    sf::Vector2i pixelPos = sf::Mouse::getPosition(window);
    sf::Vector2f mousePos = window.mapPixelToCoords(pixelPos);
    if (event.type == sf::Event::MouseButtonPressed&&state==colorBox){
        if(box.getBox().getGlobalBounds().contains(mousePos)){
            updateColor(mousePos);
        } else state = Off;
    } else if (event.type == sf::Event::MouseButtonPressed&&state==colorList){
            c = colorlist.getColor(mousePos);
            state = colorBox;
    } else if (event.type == sf::Event::MouseButtonPressed&&state==Off){
        if (demo.getGlobalBounds().contains(mousePos))
            state = colorList;
    }
}

void ColorPicker::updateColor(sf::Vector2f mPos) {
    sf::Color temp = staticColor::getColor(c);
    switch (c) {
        case staticColor::Red:
            temp.r = 255 - ((mPos.x - x_index) / 400 * (255 - 0));
            break;
        case staticColor::Green:
            temp.g = 255 - ((mPos.x - x_index) / 400 * (255 - 0));
            break;
        case staticColor::Blue:
            temp.b = 255 - ((mPos.x - x_index) / 400 * (255 - 0));
            break;
        case staticColor::Cyan:
            temp.b = 255 - ((mPos.x - x_index) / 400 * (255 - 0));
            temp.g = 255 - ((mPos.x - x_index) / 400 * (255 - 0));
            break;
        case staticColor::Pink:
            temp.b = 255 - ((mPos.x - x_index) / 400 * (255 - 0));
            temp.r = 255 - ((mPos.x - x_index) / 400 * (255 - 0));
            break;
        case staticColor::White:
            temp.b = 255 - ((mPos.x - x_index) / 400 * (255 - 0));
            temp.r = 255 - ((mPos.x - x_index) / 400 * (255 - 0));
            temp.g = 255 - ((mPos.x - x_index) / 400 * (255 - 0));
            break;
        case staticColor::Yellow:
            temp.r = 255 - ((mPos.x - x_index) / 400 * (255 - 0));
            temp.g = 255 - ((mPos.x - x_index) / 400 * (255 - 0));
    }
    demo.setFillColor(temp);
}

void ColorPicker::update() {
    box.updateColor(staticColor::getColor(c));
}

sf::Color ColorPicker::getColor() {
    return demo.getFillColor();
}