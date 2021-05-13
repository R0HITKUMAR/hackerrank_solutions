/**************************************************************************
Author : Rohit Kumar | r.k2962002@gmail.com | https://rohitkumar.ml
Domain : C language (HackerRank)
Programs : For Loop in C
URL : https://www.hackerrank.com/challenges/for-loop-in-c/problem

**************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a, b;
    char* name[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d\n%d",&a,&b);
    for(int i = a; i <= b; i++)
    {
        if(i > 9)
        {
            if(i % 2 == 0)
                printf("even\n");
            else printf("odd\n");
        }
        else
            printf("%s\n", name[i]);
    }
    return 0;
}


/**************************************************************************/

