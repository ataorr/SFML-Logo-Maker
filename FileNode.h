//
// Created by atao on 5/15/21.
//

#ifndef FILETREE_FILENODE_H
#define FILETREE_FILENODE_H
#include "Item.h"
#include <list>

struct FileNode{
    Item item;
    std::string temp;
    std::vector<FileNode> childList;
    bool enableList = false;
    FileNode();
    FileNode(std::string name, Image::image type);
    void draw(sf::RenderWindow& window);
    void changePos(sf::Vector2f pos);
    void highLight(sf::Vector2f mPos);
    void clickList(sf::Vector2f mPos);
    void showList();
};

#endif //FILETREE_FILENODE_H
