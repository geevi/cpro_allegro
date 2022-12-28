#include <stdio.h>
#include <math.h>
#include "allegro.h"

// a recursing circle drawing
void drawCircle(int x, int y, int radius) {

    al_draw_circle(x, y, radius, al_map_rgb_f(1.0, 0, 1.0), 2);
    // comment above and uncomment bellow line, for a a more colorful picture
    // al_draw_circle(x, y, radius, 
    //                 al_map_rgb_f(log2(radius)/log2(256.0),  1.0 - log2(radius)/log2(256), 0.0), // makes the color change from red to green as radius decreases
    //                 log2(radius)/2); // makes the thickness of line decrease as the radius decreases

    if(radius > 32) {
        drawCircle(x + radius/2, y, radius/2);
        drawCircle(x - radius/2, y, radius/2);
        drawCircle(x, y + radius/2, radius/2);
        drawCircle(x, y - radius/2, radius/2);
    }
}

void rec_drawing() {
    drawCircle(1024/2, 768/2, 1024/2);
    al_flip_display();  // Outputs the picture drawn to the screen
}

int main() {
    allegro_init();
    
    ALLEGRO_EVENT event;

    rec_drawing();

    // wait for some event to enter the queue.
    // In this case, it is only the event for closing the window
    al_wait_for_event(queue, &event);
    allegro_close();

    return 0;
}