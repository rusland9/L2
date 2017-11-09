Hello:main.o get_name.o print_str.o
        gcc main.o get_name.o print_str.o -c 
main.o: main.c
        gcc main.c -o main.o
get_name.o: get_name.c
        gcc get_name.c -o get_name.o
print_str.o: print_str.c
        gcc print_str.c -o print_str.o
