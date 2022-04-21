//
// Created by atao on 4/9/21.
//

#include "snapshot.h"

bool Snapshot::isEmpty() {
    return s.empty();
}

Type Snapshot::popSnapshot() {
    if (s.size() == 1){
        return empty;
    } else {
        s.pop();
        return s.top();
    }
}

void Snapshot::addEventHandler(sf::Event event){
    if (event.type == sf::Event::TextEntered){
        if (event.text.unicode == 8) {
            std::cout << event.text.unicode << "delete ";
        }
    }
}

void Snapshot::saveSnapshot(Type text) {
    s.push(text);
}