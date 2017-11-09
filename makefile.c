Hello:  main.o get_name.o print_str.o
        gcc main.o get_name.o print_str.o
main.o: main.c
        gcc -с main.c -o main.o
get_name.o: get_name.c
            gcc -с get_name.c -o get_name.o
print_str.o: print_str.c
             gcc -c print_str.c -o print_str.o
