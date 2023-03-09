#include<stdio.h>
int main(){
    int c, space=0, others=0, digit[10]={0};
    while((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\t' || c == '\n')
            space++;
        else if(c >= '0' && c <= '9')
            ++digit[c-'0'];
        else 
            ++others;
    }
    printf("spaces = %d\t others = %d\n",space, others);
    for(int i = 0; i < 10; i++)
        printf("%d\t", digit[i]);
    return 0;
}
