#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <../include/util.h>
// tux++ compile file.tuxpp

int main(int argc, char** argv) {
    if (argc <3)
    {
        printf("Too few arguments\n");
        return 1;
    }
    
    if(strcmp(argv[1], "compile") == 0) {
        char* source = read_ascii_file(argv[2]);
        free(source);
    }

    return 0;
}