#ifndef SPORE_LIFE_CYCLE_H_INCLUDED
#define SPORE_LIFE_CYCLE_H_INCLUDED

int counter; int spore;
int spore_count = 1;
float spore_X; float spore_Y; int d;

float R; float G; float B;
void spore_life_cycle()
{

        spore_X = spore_X + ABX;
        spore_Y = spore_Y + ABY;

        spore_count++;
        spore = rand() % spore_count + 1;
        spore_vertex.resize(spore_vertex.getVertexCount() +1);
        spore_vertex[spore].position = sf::Vector2f(spore_X, spore_Y);
        spore_vertex[spore].color = sf::Color(R, G, B);

        counter++;
        std::cout << (spore_vertex.getVertexCount()) << std::endl;
        //std::cout << randmovmax << " " << randmovmin << " " << d <<" " << counter <<" " << spore_cycle.getElapsedTime().asMilliseconds() << std::endl;
        randmovmax = counter + randmovmin;
        if(counter == 100)
            counter = 0;

        if(spore_cycle.getElapsedTime().asMilliseconds() >= 1000)
        {
                randmovmin++;randmovmax++;
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

#endif // SPORE_LIFE_CYCLE_H_INCLUDED
