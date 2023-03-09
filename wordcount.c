#include<stdio.h>
int main() {
    int c, lc=0, wc=0, cc=0;
    int word = 1;
    while((c = getchar()) != EOF){
        cc++;
        if(c == '\n'){
            lc++;
        }
        if(c == ' ' || c == '\t' || c == '\n')
            word = 1;
        else if (word)
        {
            wc++;
            word = 0;
        }
    }
    printf("cc = %d\t wc = %d\t lc = %d\n",cc,wc,lc);
    return 0;
}
