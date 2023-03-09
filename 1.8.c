#include <stdio.h>
/* count lines in input */
int main()
{
    int c, space = 0, tab = 0, newline = 0;
    while ((c = getchar()) != EOF) {
        switch(c){
            case ' ':
                space++;
                break;
            case '\t':
                tab++;
                break;
            case '\n':
                newline++;
                break;
        }
    }
    printf("space=%d\t,tab=%d\t,newline%d\n", space, tab, newline);
    return 0;
}
