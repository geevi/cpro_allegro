#include <allegro5/allegro5.h>
#include <allegro5/allegro_primitives.h>


// These are initialized in allegro.c
extern ALLEGRO_EVENT_QUEUE* queue;
extern ALLEGRO_DISPLAY* disp;


// Functions bellow are defined in allegro.c

void must_init(bool test, const char *description);

void allegro_init();

void allegro_close();

