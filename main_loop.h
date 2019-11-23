#ifndef MAIN_LOOP_H_INCLUDED
#define MAIN_LOOP_H_INCLUDED

void main_loop()
{

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

}


#endif // MAIN_LOOP_H_INCLUDED
