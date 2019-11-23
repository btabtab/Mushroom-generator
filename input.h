#ifndef INPUT_H_INCLUDED
#define INPUT_H_INCLUDED

float cursorX; float cursorY;
float movespeed = 0.5;
void cursor_move()
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        cursorY = cursorY - movespeed;
        std::cout << "W" << std::endl;
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        cursorY = cursorY + movespeed;
        std::cout << "S" << std::endl;
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        cursorX = cursorX - movespeed;
        std::cout << "A" << std::endl;
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        cursorX = cursorX + movespeed;
        std::cout << "D" << std::endl;
    }


}

#endif // INPUT_H_INCLUDED
