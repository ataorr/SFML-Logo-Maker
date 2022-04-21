//
// Created by atao on 5/14/21.
//

#ifndef FILETREE_FILETREE_H
#define FILETREE_FILETREE_H
#include <SFML/Graphics.hpp>
#include "FileNode.h"
#include "Logo.h"

class FileTree{
protected:
    sf::Vector2f pos;
    FileNode root;
public:
    FileTree();
    void addNode(FileNode& node, std::string name, Image::image type);
    void update();
    void addEventHandler(sf::Event event, sf::RenderWindow& window);
    void draw(sf::RenderWindow& window);
    void funtionalities(Logo &logo);
};

#endif //FILETREE_FILETREE_H
