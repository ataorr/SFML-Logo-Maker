//
// Created by atao on 5/23/21.
//

#ifndef FINALPROJ_TEXTINPUT_H
#define FINALPROJ_TEXTINPUT_H
#include "textbox.h"
#include "type.h"
#include "Logo.h"
#include "snapshot.h"

class TextInput{
private:
    textbox box;
    Type type;
    Snapshot snapshot;
    mouseCursor cursor;
public:
    void updateText(Logo& logo);
    void addEventHandler(sf::RenderWindow& window, sf::Event event);
    void update();
    void draw(sf::RenderWindow& window);
    void changeText(std::string word);
};
#endif //FINALPROJ_TEXTINPUT_H
