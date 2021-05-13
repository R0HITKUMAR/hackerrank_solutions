/**************************************************************************
Author : Rohit Kumar | r.k2962002@gmail.com | https://rohitkumar.ml
Domain : C language (HackerRank)
Programs : Array Reversal
URL : https://www.hackerrank.com/challenges/reverse-array-c/problem

**************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }
    for(i = num-1; i>=0; i--)
    {
        printf("%d ", *(arr+i));
    }
    return 0;
}

/**************************************************************************/

