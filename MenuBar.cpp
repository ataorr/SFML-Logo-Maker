//
// Created by atao on 5/23/21.
//

#include "MenuBar.h"

MenuBar::MenuBar() {
    addItem("File",pos);
    addItem("Edit",pos);
    addItem("Render",pos);
    menubar[0].addItem("Save Project");
    menubar[0].addItem("New Project");
    menubar[0].addItem("Open Project");
    menubar[0].addItem("Close Project");
    menubar[1].addItem("Undo");
    menubar[1].addItem("Redo");
    menubar[2].addItem("Export Image");
}

void MenuBar::addItem(std::string name, sf::Vector2f pos) {
    sf::Vector2f tempPos = pos;
    tempPos.x += menubar.size()*250;
    menubar.push_back(Menu(name, tempPos));
}

void MenuBar::draw(sf::RenderWindow &window) {
    for (int i = 0; i < menubar.size(); ++i) {
        menubar[i].draw(window);
    }
    if (state==Render){
        funtion.ExportImage(window);
        state=None;
    }
}

void MenuBar::addEventHandler(sf::Event event, sf::RenderWindow &window) {
    for (int i = 0; i < menubar.size(); ++i) {
        menubar[i].addEventHandler(event,window);
    }
}

void MenuBar::update() {
    for (int i = 0; i < menubar.size(); ++i) {
        menubar[i].update();
        Funtion temp = menubar[i].getState();
        if (temp == Render){
            state = Render;
        } else if (temp == OpenFile){
            funtion.openFile();
            state = OpenFile;
        } else if (temp == Close){
            funtion.closeProject();
        }
    }
}

void MenuBar::logoUpdate(TextInput &input) {
    if (state == OpenFile){
        input.changeText(funtion.getText());
        state = None;
    }
}