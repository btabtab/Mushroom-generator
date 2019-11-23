#ifndef DRAW_H_INCLUDED
#define DRAW_H_INCLUDED

void draw()
{

    window.clear();
    window.draw(spore_vertex);
    window.display();
    window.setView(camera);

}

#endif // DRAW_H_INCLUDED
