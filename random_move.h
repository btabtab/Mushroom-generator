#ifndef RANDOM_MOVE_H_INCLUDED
#define RANDOM_MOVE_H_INCLUDED

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

#endif // RANDOM_MOVE_H_INCLUDED
