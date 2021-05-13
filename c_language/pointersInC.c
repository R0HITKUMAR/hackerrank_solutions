/**************************************************************************
Author : Rohit Kumar | r.k2962002@gmail.com | https://rohitkumar.ml
Domain : C language (HackerRank)
Programs : Pointers in C
URL : https://www.hackerrank.com/challenges/pointer-in-c/problem

**************************************************************************/
#include <stdio.h>
int main() {
    int a, b,s;
    int *p = &a, *q = &b;
    scanf("%d %d", &a, &b);
    s=((*p)+(*q));
    if((*p)>(*q))
        b=((*p)-(*q));
    else
        b=((*q)-(*p));

    printf("%d\n%d", s, b);

    return 0;
}
/**************************************************************************/

