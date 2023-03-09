#include <stdio.h>
/* count lines in input */
int main()
{
    int c;
    while ((c = getchar()) != EOF) {
        switch(c){
            case '\t':
                printf("\\t"); 
                break;
            case '\b':
                printf("\\b"); 
                break;
            case '\\':
                printf("\\\\"); 
                break;
            default:
                putchar(c);
        }
    }
    return 0;
}
