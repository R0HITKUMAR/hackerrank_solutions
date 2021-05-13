/**************************************************************************
Author : Rohit Kumar | r.k2962002@gmail.com | https://rohitkumar.ml
Domain : C language (HackerRank)
Programs : Playing With Characters
URL : https://www.hackerrank.com/challenges/playing-with-characters/problem

**************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch,s[100],sen[100];
    scanf("%c\n", &ch);
    scanf("%[^\n]%*c", s);
    scanf("\n");
    scanf("%[^\n]%*c", sen);

    printf("%c\n", ch);
    puts(s);
    puts(sen);
    return 0;
}


/**************************************************************************/

