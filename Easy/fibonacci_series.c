#include <stdio.h>
#include <stdlib.h>

int fibonacci(int number, int x, int y){
  if(number == 0)
    return 0;
  if(number > 1)
    return y + fibonacci(number - 1, y, x + y);
  else
    return 1;
}

int main(int argc, const char *argv[]){

    FILE *file = fopen(argv[1], "r");
    char line[1024];
    int number;
    while (fgets(line, 1024, file)) {
        sscanf(line, "%d", &number);
        printf("%d\n", fibonacci(number,1,0));
    }

    return 0;
}