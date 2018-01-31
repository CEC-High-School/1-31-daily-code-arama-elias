#include <iostream>
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>

int main() {
	al_init();
	al_init_primitives_addon();

	ALLEGRO_DISPLAY *display = NULL;

	display = al_create_display(1000, 1000);
	al_draw_filled_rectangle(100, 200, 700, 400, al_map_rgb(210, 53, 0));
	al_draw_filled_circle(250, 400, 50,al_map_rgb(211,211,211));
	al_draw_filled_circle(550, 400, 50, al_map_rgb(211, 211, 211));
	
	al_draw_filled_rectangle(550, 170, 600, 200, al_map_rgb(0, 53, 200));
	al_draw_filled_rectangle(450, 300, 600, 200, al_map_rgb(63, 0, 10));
	al_flip_display();
	al_rest(34);
}