#ifndef SEED_INPUT_H_INCLUDED
#define SEED_INPUT_H_INCLUDED

int seed;
void query()
{
    std::cin >> seed;
    srand(seed);
}

#endif // SEED_INPUT_H_INCLUDED
