#include<stdio.h>
#define MAXLINES 10
#define MAXLENGTH 10

int getlines(char lines[], int maxlength){
    int i;
    char c;
    for(i = 0; i < maxlength-1 && (c = getchar()) != EOF && c != '\n'; i++)
        lines[i] = c;
    if(c == '\n'){
        lines[i] = c;
        i++;
    }
    return i;
}

void copy(char longest[], char lines[]){
    int i = 0;
    while(longest[i++] = lines[i++] != '\0') ;        
}

int main(){
    int linelen, max=0;
    char lines[MAXLINES], longest[MAXLENGTH];
    while(linelen = getlines(lines, MAXLENGTH) > 0) {
        //printf("length = %d", linelen);
        if(max < linelen){
            max = linelen;
            copy(longest, lines); 
        }}
    printf(longest);

    return 0;
}

