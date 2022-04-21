//
// Created by atao on 4/9/21.
//

#ifndef TEXTEDITOR_SNAPSHOT_H
#define TEXTEDITOR_SNAPSHOT_H

#include <stack>
#include "type.h"
#include <sfml/graphics.hpp>

class Snapshot{
private:
    std::stack<Type> s;
    Type empty;
public:
    void addEventHandler(sf::Event event);
    void saveSnapshot(Type text);
    bool isEmpty();
    Type popSnapshot();
};

#endif //TEXTEDITOR_SNAPSHOT_H
