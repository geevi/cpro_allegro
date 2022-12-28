LDLIBS = -lm -lallegro_primitives -lallegro 

1 : 1_learn_draw.o allegro.o
	cc -o 1.out 1_learn_draw.o allegro.o $(LDLIBS)

2 : 2_rec_drawing.o allegro.o
	cc -o 2.out 2_rec_drawing.o allegro.o $(LDLIBS)

prog_objs = 1_learn_draw.o 2_rec_drawing.o allegro.o
$(prog_objs) : allegro.h

clean:
	rm -f *.out *.o