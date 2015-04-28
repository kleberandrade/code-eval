#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}

int main(int argc, const char * argv[]) {
    FILE *file = fopen(argv[1], "r");
    char line[1024];
    int i, sum, start;
    int letters[27];
    
    while (fgets(line, 1024, file)) {
        i = sum = 0;
        memset(letters,(int)0,sizeof(int)*27);
        
        while (line[i])
        {
            if (isalpha(line[i]))
                letters[(char)tolower(line[i]) - 'a']++;

            i++;
        }
        
        qsort (letters, 27, sizeof(int), compare);
		    
		start = 26;
		for (int i = 26; i >= 0; i--)
			sum += (start-- * letters[i]);
		
		printf("%d\n", sum);
    }
    
    return 0;
} 