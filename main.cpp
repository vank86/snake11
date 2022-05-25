#include <iostream>
#include <SFML/Graphics.hpp>
#include "field.h"


int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "Snake", sf::Style::Close);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.display();
    }

    return 0;
}