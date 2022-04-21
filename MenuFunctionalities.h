//
// Created by atao on 6/6/21.
//

#ifndef FINALPROJ_MENUFUNCTIONALITIES_H
#define FINALPROJ_MENUFUNCTIONALITIES_H
#include "Menu.h"
#include "FileTree.h"
#include <fstream>

class altTree : public FileTree{
public:
    altTree();
};

class MenuFunctionalities {
private:
    sf::RenderWindow window;
    sf::Clock clock;
public:
    MenuFunctionalities();
    void openFile();
    void ExportImage(sf::RenderWindow &window);
    void closeProject();
    bool doubleClick(sf::Event event);
    std::string getText();
};


#endif //FINALPROJ_MENUFUNCTIONALITIES_H
