//
// Created by atao on 4/8/21.
//

#ifndef TEXTEDITOR_EVENTHANDLER_H
#define TEXTEDITOR_EVENTHANDLER_H

#include <sfml/graphics.hpp>

class EventHandle {
public:
    virtual  void addEventHandler(sf::RenderWindow& window, sf::Event event)=0;
    virtual  void update() = 0;
};

#endif //TEXTEDITOR_EVENTHANDLER_H
