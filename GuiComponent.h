//
// Created by atao on 5/16/21.
//

#ifndef FILETREE_GUICOMPONENT_H
#define FILETREE_GUICOMPONENT_H

#include "FileTree.h"
#include "MenuBar.h"
#include "TextInput.h"
#include "BarSets.h"
#include "FontList.h"
#include "SwitchMenu.h"
#include "ColorPicker.h"
#include <iostream>

class Gui{
private:
    FontList fontList;
    FileTree fileTree;
    MenuBar menu;
    Logo logo;
    TextInput textInput;
    BarSets sliderBars;
    SwitchMenu switchMenu;
    ColorPicker colorPicker = ColorPicker(700,850,"Text Color", true);
    ColorPicker colorPicker2 = ColorPicker(900,850, "Background Color", false);
public:
    void addEventHandler(sf::RenderWindow& window, sf::Event event);
    void update();
    void draw(sf::RenderWindow& window);
    void logoUpdate();
};

#endif //FILETREE_GUICOMPONENT_H
