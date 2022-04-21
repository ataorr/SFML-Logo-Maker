//
// Created by atao on 5/14/21.
//

#include "Image.h"

////This Code is from Dave (Image Class)

std::map<Image::image, sf::Texture> Image::images;
std::map<Image::image, bool> Image::loaded;

sf::Texture& Image::getImage(image image) {
    if (!loaded[image]){
        loadImage(image);
    } return images[image];
}

void Image::loadImage(image image) {
    if (!loaded[image]){
        if (!images[image].loadFromFile("../images/"+getImagePath(image))){
            loaded[image] = true;
            exit(28);
        }
    }
}

std::string Image::getImagePath(image image) {
    switch (image) {
        case FOLDER: return "folder.png";
        case FILE: return "file.png";
        case BOBA: return "boba.png";
        case PIZZA: return "pizza.png";
        case HOTDOG: return "hot-dog.png";

    }
}