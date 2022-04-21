//
// Created by atao on 5/16/21.
//

#include "GuiComponent.h"

void Gui::addEventHandler(sf::RenderWindow &window, sf::Event event) {
    textInput.addEventHandler(window,event);
    menu.addEventHandler(event,window);
    sliderBars.addEventHandler(event,window);
    fileTree.addEventHandler(event,window);
    fontList.addEventHandler(event,window,logo);
    switchMenu.addEventHandler(event,window,logo);
    colorPicker.addEventHandler(event,window);
    colorPicker2.addEventHandler(event,window);
}

void Gui::draw(sf::RenderWindow &window) {
    window.draw(logo.box);
    window.draw(logo.icon);
    window.draw(logo.logotext);
    window.draw(logo.shadow);
    fileTree.draw(window);
    menu.draw(window);
    textInput.draw(window);
    sliderBars.draw(window);
    fontList.draw(window);
    switchMenu.draw(window);
    colorPicker.draw(window);
    colorPicker2.draw(window);
}

void Gui::update() {
    fileTree.update();
    switchMenu.update();
    fontList.update();
    menu.update();
    textInput.update();
    colorPicker.update();
    colorPicker2.update();
    sliderBars.update();
    logoUpdate();
}

void Gui::logoUpdate() {
    textInput.updateText(logo);
    if (switchMenu.getSwitch()== SwitchMenu::TEXT){
        logo.logotext.setCharacterSize(sliderBars.getTextSize()+70);
        //std::cout << sliderBars.getTextXPos();
        logo.logotext.setPosition(sliderBars.getTextXPos()*20-450,
                                  sliderBars.getTextYPos()*7);
    } else {
        fileTree.funtionalities(logo);
        logo.icon.setPosition(sliderBars.getTextXPos()*20-450,
                              sliderBars.getTextYPos()*7-200);
        logo.icon.setScale(sf::Vector2f(sliderBars.getTextSize()*0.01f,
                                        sliderBars.getTextSize()*0.01f));
    }
    logo.shadow.setPosition(sliderBars.getShadowX()*10+50,
                            sliderBars.getShadowY()*10+50);
    logo.shadow.setScale(1.2,-5.5+(sliderBars.getSkew()*0.1));
    fontList.updateFont(logo);
    sf::Color temp = logo.shadow.getFillColor();
    temp.a = sliderBars.getShadow();
    logo.shadow.setFillColor(temp);
    logo.logotext.setFillColor(colorPicker.getColor());
    logo.box.setFillColor(colorPicker2.getColor());
    menu.logoUpdate(textInput);
}