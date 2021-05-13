/**************************************************************************
Author : Rohit Kumar | r.k2962002@gmail.com | https://rohitkumar.ml
Domain : C language (HackerRank)
Programs : Functions in C
URL : https://www.hackerrank.com/challenges/functions-in-c/problem
**************************************************************************/
#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
   if (a>b && a>c && a>d)
   {
      printf("%d", a);
    }
    else if (b>a && b>c && b>d)
    {
      printf("%d", b);
    }
    else if (c>a && c>b && c>d)
    {
      printf("%d", c);
    }
    else if (d>a && d>b && d>c)
    {
     printf("%d", d);
    }
    return 0;
}


/**************************************************************************/

