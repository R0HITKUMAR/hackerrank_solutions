/**************************************************************************
Author : Rohit Kumar | r.k2962002@gmail.com | https://rohitkumar.ml
Domain : C language (HackerRank)
Programs : Sum of Digits of a Five Digit Number
URL : https://www.hackerrank.com/challenges/sum-of-digits-of-a-five-digit-number/problem

**************************************************************************/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n,a,b,c,d,e;
    scanf("%d", &n);
    a=n%10;
    n=n/10;
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    e=n%10;
    printf("%d",a+b+c+d+e);
    return 0;
}

/**************************************************************************/

