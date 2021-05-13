/**************************************************************************
Author : Rohit Kumar | r.k2962002@gmail.com | https://rohitkumar.ml
Domain : C language (HackerRank)
Programs : Digit Frequency
URL : https://www.hackerrank.com/challenges/frequency-of-digits-1/problem

**************************************************************************/
#include <stdio.h>
#include <string.h>
main()
{
    char a[1000];
    int i,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0,z=0;
    scanf("%s", a);
    for (i=0;a[i]!='\0';i++)
    {
            if(a[i]=='0')
                zero++;
            else if(a[i]=='1')
                one++;
            else if(a[i]=='2')
                two++;
            else if(a[i]=='3')
                three++;
            else if(a[i]=='4')
                four++;
            else if(a[i]=='5')
                five++;
            else if(a[i]=='6')
                six++;
            else if(a[i]=='7')
                seven++;
            else if(a[i]=='8')
                eight++;
            else if(a[i]=='9')
                nine++;
            else
                z++;

    }
    printf("%d %d %d %d %d %d %d %d %d %d",zero,one,two,three,four,five,six,seven,eight,nine);

    return 0;
}


/**************************************************************************/

