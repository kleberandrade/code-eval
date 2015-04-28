#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    int number = 1;
    while (number < 100)
    {
        printf("%d\n", number);
        number += 2;
    }
    return 0;
}