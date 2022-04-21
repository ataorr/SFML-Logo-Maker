//
// Created by atao on 5/24/21.
//

#include "BarSets.h"

BarSets::BarSets() {
    background = sf::Text("Backgournd Opacity:",staticFont::getFont(staticFont::ROBOTO),30);
    background.setPosition(700,930);
}

void BarSets::draw(sf::RenderWindow &window) {
    textSize.draw(window);
    textXPos.draw(window);
    textYPos.draw(window);
    ShadowXPos.draw(window);
    ShadowYPos.draw(window);
    Skew.draw(window);
    ShadowOpacity.draw(window);
    BackgroundOpacty.draw(window);
    window.draw(background);
}

void BarSets::addEventHandler(sf::Event event, sf::RenderWindow &window) {
    textSize.addEventHandler(event,window);
    textXPos.addEventHandler(event,window);
    textYPos.addEventHandler(event,window);
    ShadowXPos.addEventHandler(event,window);
    ShadowYPos.addEventHandler(event,window);
    Skew.addEventHandler(event,window);
    ShadowOpacity.addEventHandler(event,window);
    BackgroundOpacty.addEventHandler(event,window);
}

void BarSets::update() {
    textXPos.update();
    textSize.update();
    textYPos.update();
    ShadowYPos.update();
    ShadowXPos.update();
    Skew.update();
    ShadowOpacity.update();
    BackgroundOpacty.update();
}
int BarSets::getTextSize() {
    return textSize.getValue();
}

int BarSets::getTextXPos(){
    return textXPos.getValue();
}

int BarSets::getTextYPos() {
    return textYPos.getValue();
}

int BarSets::getShadowX() {
    return ShadowXPos.getValue();
}

int BarSets::getShadowY() {
    return ShadowYPos.getValue();
}

int BarSets::getSkew() {
    return Skew.getValue();
}

int BarSets::getShadow() {
    return ShadowOpacity.getValue();
}

int BarSets::getBackground() {
    return BackgroundOpacty.getValue();
}