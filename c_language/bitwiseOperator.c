/**************************************************************************
Author : Rohit Kumar | r.k2962002@gmail.com | https://rohitkumar.ml
Domain : C language (HackerRank)
Programs : Bitwise Operators
URL : https://www.hackerrank.com/challenges/bitwise-operators-in-c/problem

**************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int and = 0, or = 0, xor = 0;

    for(int i = 1; i <= n; i++)
    {
        for(int j = i + 1; j <= n; j++)
        {
            if(and < (i & j) && (i & j) < k)
                and = i & j;
            if(or < (i | j) && (i | j) < k)
                or = i | j;
            if(xor < (i ^ j) && (i ^ j) < k)
                xor = i ^ j;
        }
    }
    printf("%d\n", and);
    printf("%d\n", or);
    printf("%d\n", xor);

    return 0;
}


/**************************************************************************/

