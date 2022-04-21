//
// Created by atao on 6/3/21.
//

#ifndef DEMO_STATICCOLOR_H
#define DEMO_STATICCOLOR_H
#include <SFML/Graphics.hpp>

class staticColor {
public:
    enum color{Red,Green,Blue,Pink,White,Cyan,Yellow};
    static std::map<color,sf::Color> colors;
    static sf::Color& getColor(color color);
    static void setColor(color color);
};


#endif //DEMO_STATICCOLOR_H
