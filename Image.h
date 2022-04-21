//
// Created by atao on 5/14/21.
//

#ifndef FILETREE_IMAGE_H
#define FILETREE_IMAGE_H

#include <map>
#include <SFML/Graphics.hpp>
#include <string>

////This Code is from Dave (Image Class)

class Image{
public:
    enum image{FOLDER,FILE,BOBA,PIZZA,HOTDOG};
    static std::map<image,sf::Texture> images;
    static std::map<image,bool> loaded;
    static sf::Texture& getImage(image image);
    static void loadImage(image image);
    static std::string getImagePath(image image);
};

#endif //FILETREE_IMAGE_H
