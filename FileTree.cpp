//
// Created by atao on 5/14/21.
//

#include "FileTree.h"

FileTree::FileTree() {
    pos = sf::Vector2f(1200,820);
    root.item.setFolder();
    root.item.changeName("Resources");
    root.enableList= true;
    addNode(root,"Images", Image::FOLDER);
    addNode(root,"Fonts", Image::FOLDER);
    addNode(root,"Export",Image::FOLDER);
    addNode(root,"Saved",Image::FOLDER);
    addNode(root.childList[0],"File.png",Image::FILE);
    addNode(root.childList[0],"Folder.png", Image::FILE);
    addNode(root.childList[1],"Open-Sans.ttf", Image::FILE);
    addNode(root.childList[1],"Arial.ttf",Image::FILE);
    addNode(root.childList[1],"Roboto.ttf", Image::FILE);
    addNode(root.childList[1],"Oswald.ttf",Image::FILE);
    addNode(root,"Boba.png",Image::FILE);
    addNode(root,"Pizza.png", Image::FILE);
    addNode(root,"HotDog.png",Image::FILE);
}

void FileTree::draw(sf::RenderWindow& window) {
    root.draw(window);
}

void FileTree::update() {
    root.changePos(pos);
}

void FileTree::addEventHandler(sf::Event event, sf::RenderWindow& window) {
    sf::Vector2i pixelPos = sf::Mouse::getPosition(window);
    sf::Vector2f mousePos = window.mapPixelToCoords(pixelPos);
    root.highLight(mousePos);
    if (event.type == sf::Event::MouseButtonPressed) {
        if (event.mouseButton.button == sf::Mouse::Left) {
            root.clickList(mousePos);
        }
    }
}

void FileTree::addNode(FileNode& node, std::string name, Image::image type) {
    node.childList.push_back(FileNode(name,type));
}

void FileTree::funtionalities(Logo &logo) {
    if (root.temp == "Boba.png"){
        logo.icon.setTexture(Image::getImage(Image::BOBA));
        root.temp = "";
    } else if (root.temp == "Pizza.png"){
        logo.icon.setTexture(Image::getImage(Image::PIZZA));
        root.temp = "";
    } else if (root.temp == "HotDog.png"){
        logo.icon.setTexture(Image::getImage(Image::HOTDOG));
        root.temp = "";
    }
}
