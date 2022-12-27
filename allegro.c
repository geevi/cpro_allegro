#include <stdio.h>
#include "allegro.h"

ALLEGRO_EVENT_QUEUE* queue = NULL;
ALLEGRO_DISPLAY* disp = NULL;

// Function for checking errors, printing and exiting if error happens.
// Checks a condition `test`. If false, prints out a `description` and
// exits
void must_init(bool test, const char *description)
{
    if(test) return;

    printf("couldn't initialize %s\n", description);
    exit(1);
}

// Initialization logic of allegro library
void allegro_init() {
    must_init(al_init(), "init");

    // creates an event queue
    // which store all the events that can happen
    // like keyboard press, closing of window 
    // timer has ended etc. 
    queue = al_create_event_queue();
    must_init(queue, "queue");

    // creates a display for drawinng
    disp = al_create_display(640, 480);
    must_init(disp, "disp");

    must_init(al_init_primitives_addon(), "primitives");

    // connecting the display to the queue
    // when the close button is clicked, an event is added to the queue
    al_register_event_source(queue, al_get_display_event_source(disp));
}

// frees all the memory allocated by allegro
void allegro_close() {
    al_destroy_display(disp);
    al_destroy_event_queue(queue);
}
