//
// Created by atao on 5/14/21.
//

#ifndef FILETREE_STATICFONT_H
#define FILETREE_STATICFONT_H
#include <SFML/Graphics.hpp>

class staticFont{
public:
    enum fonts {OPENSANS, ARIAL, ROBOTO, OSWALD, LAST};
    static void setFont();
    static sf::Font& giveFont();
    static sf::Font& getFont(fonts font);
private:
    static std::vector<sf::Font> _font;
    static std::vector<bool> loaded;
    static std::string mapFont(fonts font);
    static void loadFont(fonts font);
};

#endif //FILETREE_STATICFONT_H
