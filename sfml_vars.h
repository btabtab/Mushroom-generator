#ifndef SFML_VARS_H_INCLUDED
#define SFML_VARS_H_INCLUDED

sf::RenderWindow window(sf::VideoMode(800, 800), "fungi farm v1.0"); // creates the window
sf::View camera(sf::Vector2f(400.f, 400.f), sf::Vector2f(800.f, 800.f));// the code to crreate the sfml view for the program
sf::VertexArray cameraline(sf::Lines, 4);// the line from the current point to the camera
sf::Clock time_elapsed; //main_clock

sf::Clock spore_cycle;

sf::VertexArray spore_vertex(sf::Points);

#endif // SFML_VARS_H_INCLUDED
