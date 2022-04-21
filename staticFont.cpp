//
// Created by atao on 5/14/21.
//

#include "staticFont.h"

std::vector<sf::Font> staticFont::_font(LAST, sf::Font());
std::vector<bool> staticFont::loaded(LAST,false);


void staticFont::loadFont(staticFont::fonts font) {
    if (!loaded[font]){
        _font[font].loadFromFile(mapFont(font));
        loaded[font]= true;
    }
}

std::string staticFont::mapFont(fonts font) {
    switch (font) {
        case OPENSANS: return "../fonts/OpenSans-Bold.ttf" ;
        case ARIAL: return "../fonts/arial.ttf";
        case ROBOTO: return "../fonts/Roboto.ttf";
        case OSWALD: return "../fonts/Oswald.ttf";
    }
}

sf::Font& staticFont::getFont(fonts font) {
    loadFont(font);
    return _font[font];
}