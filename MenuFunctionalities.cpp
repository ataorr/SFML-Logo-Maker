//
// Created by atao on 6/6/21.
//

#include "MenuFunctionalities.h"

MenuFunctionalities::MenuFunctionalities() {
    window.setFramerateLimit(60);
}

void MenuFunctionalities::openFile() {
    altTree tree;
    window.create(sf::VideoMode(800,800),"Open File");
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            tree.addEventHandler(event,window);
            if (event.type == sf::Event::Closed)
                window.close();
            if (doubleClick(event))
                window.close();
        }
        tree.update();
        window.clear(sf::Color::Black);
        tree.draw(window);
        window.display();
    }
}



void MenuFunctionalities::ExportImage(sf::RenderWindow &window) {
    sf::Texture texture;
    sf::Image image;
    sf::Rect<int> rect(0,60,1600,700);
    texture.create(window.getSize().x, window.getSize().y);
    texture.update(window);
    image.create(1600,700,sf::Color::Black);
    image.copy(texture.copyToImage(),0,0,rect, false);
    if (image.saveToFile("../ExportImage/Screenshot.jpg"));
    std::cout << "screenshot saved " << std::endl;
}

void MenuFunctionalities::closeProject() {
    exit(1);
}


altTree::altTree() {
    pos = sf::Vector2f(50,50);
    addNode(root.childList[3],"History.txt",Image::FILE);
}

std::string MenuFunctionalities::getText() {
    std::fstream file;
    std::string temp;
    file.open("../Saved.txt");
    getline(file,temp);
    file.close();
    return temp;
}

bool MenuFunctionalities::doubleClick(sf::Event event) {
    if (event.type == sf::Event::MouseButtonPressed){
        if (clock.getElapsedTime().asSeconds() < 0.2){
            std::cout << "Opened Saved Project\n";
            return true;
        } else {
            clock.restart();
            return false;
        }
    }
}