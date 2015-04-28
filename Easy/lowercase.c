#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    FILE *file = fopen(argv[1], "r");
    char line[1024];
    int i;
    char c;
    
    while (fgets(line, 1024, file)) {
        i = 0;
        while (line[i]){
            c = line[i++];
            putchar (tolower(c));
        }
        printf("\n");
    }

    return 0;
} 