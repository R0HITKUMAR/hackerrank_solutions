/**************************************************************************
Author : Rohit Kumar | r.k2962002@gmail.com | https://rohitkumar.ml
Domain : C language (HackerRank)
Programs : 1D Arrays in C
URL : https://www.hackerrank.com/challenges/1d-arrays-in-c/problem

**************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, *arr, i, sum = 0;
    scanf("%d",&n);
    arr = (int*)malloc(n * sizeof(int));
    for(i =0;i<n;i++)
    {
        scanf("%d",arr+i);
    }

    for(i=0;i<n;i++)
    {
        sum+=*(arr+i);
    }

    printf("%d\n",sum);
    free(arr);
    return 0;
}


/**************************************************************************/

