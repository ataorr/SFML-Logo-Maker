//
// Created by atao on 5/24/21.
//

#ifndef SLIDEBAR_BARSETS_H
#define SLIDEBAR_BARSETS_H
#include "SlideBar.h"

class BarSets{
private:
    sf::Text background;
    SlideBar textSize = SlideBar(50,1100,300, "Item Size");
    SlideBar textXPos = SlideBar(50,1170,800,"Item XPos");
    SlideBar textYPos = SlideBar(50,1240,800,"Item YPos");
    SlideBar ShadowXPos = SlideBar(50,1310,250,"Shadow-X");
    SlideBar ShadowYPos = SlideBar(600,1310,250,"Shadow-Y");
    SlideBar Skew = SlideBar (600, 1100, 250, "       Skew");
    SlideBar ShadowOpacity = SlideBar(50,1380,800,"Opacity:");
    SlideBar BackgroundOpacty = SlideBar(500, 1000, 350, "");
public:
    BarSets();
    void draw(sf::RenderWindow &window);
    void addEventHandler(sf::Event event, sf::RenderWindow& window);
    void update();
    int getTextSize();
    int getTextXPos();
    int getTextYPos();
    int getShadowX();
    int getShadowY();
    int getSkew();
    int getShadow();
    int getBackground();

};

#endif //SLIDEBAR_BARSETS_H
