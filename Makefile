# Tells compiler to link the program to math and allegro libraries
LDLIBS = -lm -lallegro_primitives -lallegro 

# the executable 1.out will be obtained by running make 1
# but it has 1_learn_draw.o allegro.o as dependencies
1 : 1_learn_draw.o allegro.o
	cc -o 1.out 1_learn_draw.o allegro.o $(LDLIBS)

# same as above for 2.out
2 : 2_rec_drawing.o allegro.o
	cc -o 2.out 2_rec_drawing.o allegro.o $(LDLIBS)

# specifies that all the bellow objects depends on allegro.h
# if allegro.h changes all of them need to be regenerated
prog_objs = 1_learn_draw.o 2_rec_drawing.o allegro.o
$(prog_objs) : allegro.h

# ``make clean`` will remove all the generated *.out and *.o files
clean:
	rm -f *.out *.o