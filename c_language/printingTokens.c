/**************************************************************************
Author : Rohit Kumar | r.k2962002@gmail.com | https://rohitkumar.ml
Domain : C language (HackerRank)
Programs : Printing Tokens
URL : https://www.hackerrank.com/challenges/printing-tokens-/problem

**************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    int i;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    while(s[i]!='\0')
    {
        if(s[i]==' ')
            printf("\n");
        else
            printf("%c",s[i]);
        i++;
    }
    return 0;
}


/**************************************************************************/

