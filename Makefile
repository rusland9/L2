menu:	menu.o abs_max.o abs_min.o sum.o diff.o
	gcc menu.o abs_max.o abs_min.o sum.o diff.o -o menu
menu.o:	menu.c
	gcc -c menu.c -o menu.o
abs_max.o: abs_max.c abs_max.h
	gcc -c abs_max.c
abs_min.o: abs_min.c abc_min.h
	gcc -c abs_min.c
diff.o: diff.c diff.h
	gcc -c diff.c
sum.o: sum.c sum.h
	gcc -c sum.c
clean:
	rm -rf *.o hello
