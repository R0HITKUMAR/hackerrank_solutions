/**************************************************************************
Author : Rohit Kumar | r.k2962002@gmail.com | https://rohitkumar.ml
Domain : C language (HackerRank)
Programs : Printing Pattern Using Loops
URL : https://www.hackerrank.com/challenges/printing-pattern-2/problem

**************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
  	int l=2*n-1;
    int p,i,j;
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            p=i<j? i:j;
            p=p<l-i?p:l-i-1;
            p=p<l-j-1?p:l-j-1;
            printf("%d ",n-p);
        }
        printf("\n");
    }
    return 0;
}


/**************************************************************************/

