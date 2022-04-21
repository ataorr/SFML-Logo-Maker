#include <iostream>
#include <SFML/Graphics.hpp>
#include "GuiComponent.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1600, 1450), "Logo Maker");
    window.setFramerateLimit(60);
    Gui gui;
    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            gui.addEventHandler(window,event);
        }
        gui.update();
        window.clear(sf::Color::Black);
        gui.draw(window);
        window.display();
    }

    return 0;
}