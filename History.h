//
// Created by atao on 5/3/21.
//

#ifndef TEXTEDITOR_HISTORY_H
#define TEXTEDITOR_HISTORY_H
#include <SFML/Graphics.hpp>
#include "snapshot.h"

class History{
private:
    Snapshot snapshot;
public:
    History();
    void addEventHandler(sf::Event event, sf::RenderWindow window);
    void update();
    void undo();
};
#endif //TEXTEDITOR_HISTORY_H
