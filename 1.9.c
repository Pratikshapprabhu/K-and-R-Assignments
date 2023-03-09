#include<stdio.h>
int main()
{
    char c;
    int nl=0;
    while ((c = getchar()) != EOF){
        if(c == ' ')
            nl = 1;
        else if(nl){
            putchar(' ');
            putchar(c);
            nl = 0;
        }
        else {
            putchar(c);
        }
    }
    return 0;
}
