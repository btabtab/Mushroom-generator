#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <string>
#include <stdlib.h>     /* srand, rand */

using namespace std;

sf::RenderWindow window(sf::VideoMode(800, 800), "fungi farm v1.0"); // creates the window
sf::View camera(sf::Vector2f(400.f, 400.f), sf::Vector2f(800.f, 800.f));// the code to crreate the sfml view for the program
sf::VertexArray cameraline(sf::Lines, 4);// the line from the current point to the camera
sf::Clock time_elapsed; //main_clock

sf::Clock spore_cycle;

float AX; float AY;
float BX; float BY;
float ABX; float ABY;

int randmovmax = 1; int randmovmin = 0;

void rand_move_generate()
{
    AX = rand() % randmovmax + randmovmin;
    AY = rand() % randmovmax + randmovmin;

    BX = rand() % randmovmax + randmovmin;
    BY = rand() % randmovmax + randmovmin;

    ABX = AX - BX;
    ABY = AY - BY;

    ABX = (ABX) + (AX - BX);
    ABY = (ABY) + (AY - BY);

}

float cursorX; float cursorY;
float movespeed = 0.5;
void cursor_move()
{
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
    {
        cursorY = cursorY - movespeed;
        cout << "W" << endl;
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
    {
        cursorY = cursorY + movespeed;
        cout << "S" << endl;
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
    {
        cursorX = cursorX - movespeed;
        cout << "A" << endl;
    }

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
    {
        cursorX = cursorX + movespeed;
        cout << "D" << endl;
    }


}

sf::VertexArray spore_vertex(sf::Points, 10000);

void draw()
{

    window.clear();
    window.draw(spore_vertex);
    window.display();
    window.setView(camera);

}

int counter; int spore;
int spore_count = 10000;
float spore_X; float spore_Y; int d;
int move_max_reset;

float R; float G; float B;
void spore_life_cycle()
{

        spore_X = spore_X + ABX;
        spore_Y = spore_Y + ABY;
        spore = rand() % spore_count + 1;
        spore_vertex[spore].position = sf::Vector2f(spore_X, spore_Y);
        spore_vertex[spore].color = sf::Color(R, G, B);

        counter++;

        cout << randmovmax << " " << randmovmin << " " << d <<" " << counter <<" " << spore_cycle.getElapsedTime().asMilliseconds() << endl;
        randmovmax = counter + randmovmin;
        if(counter == 100)
            counter = 0;

        if(spore_cycle.getElapsedTime().asMilliseconds() >= 1000)
        {
                randmovmin++;randmovmax++;
                move_max_reset++;
                d = 0;

                R = R + (rand() % 3 + 0) - (rand() % 3 + 0);
                G = G + (rand() % 3 + 0) - (rand() % 3 + 0);
                B = B + (rand() % 3 + 0) - (rand() % 3 + 0);

                spore_cycle.restart();

        }
        else
        {
            d++;
        }
        spore_X = 0;
        spore_Y = 0;

}

int seed;
void query()
{
    cin >> seed;
    srand(seed);
}

int main()
{

//query();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        /// ////////////////////////////////////////////

        rand_move_generate();


        camera.setCenter(cursorX, cursorY);
        cursor_move();
        spore_life_cycle();

        draw();

        /// ////////////////////////////////////////////
    }

    return 0;
}
