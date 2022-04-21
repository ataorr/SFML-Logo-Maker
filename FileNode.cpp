//
// Created by atao on 5/15/21.
//

#include "FileNode.h"

FileNode::FileNode() {

}

FileNode::FileNode(std::string name,Image::image type) {
    item.changeName(name);
    if (type == Image::FILE){
        item.setFile();
    } else {
        item.setFolder();
    }
}

void FileNode::draw(sf::RenderWindow &window) {
    item.draw(window);
    if (!childList.empty()&&enableList){
        for(int i = 0;i<childList.size();i++){
            childList[i].draw(window);
        }
    }
}

void FileNode::changePos(sf::Vector2f pos) {
    sf::Vector2f tempPos = pos;
    item.changePos(tempPos);
    if (!childList.empty()&&enableList){
        tempPos.x+=50;
        for(int i = 0;i<childList.size();i++){
            tempPos.y+=50;
            childList[i].changePos(tempPos);
            if (!childList[i].childList.empty()&&childList[i].enableList){
                tempPos.y+=50*childList[i].childList.size();
            }
        }
    }
}

void FileNode::highLight(sf::Vector2f mPos) {
    item.HighLight(mPos);
    if (!childList.empty()){
        for (int i = 0; i < childList.size(); ++i) {
            childList[i].highLight(mPos);
        }
    }
}

void FileNode::clickList(sf::Vector2f mPos) {
    if (item.getBox().getGlobalBounds().contains(mPos)){
        showList();
    } else if (!childList.empty()){
        for (int i = 0; i < childList.size(); ++i) {
            if (childList[i].item.getBox().getGlobalBounds().contains(mPos)){
                childList[i].clickList(mPos);
                temp = childList[i].item.getText();
            }
        }
    }
}

void FileNode::showList() {
    if (!enableList)
        enableList = true;
    else
        enableList = false;
}

