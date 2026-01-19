//Problem: 231A-Team
//Difficulty: 800
//Topic: brute force, greedy
#include <stdio.h>

int main()
{
     int a,b,c,n, count = 0;
     scanf("%d", &n);
     
     while(n--)
     {
          scanf("%d %d %d", &a, &b, &c);
          if(a + b + c >= 2)
               count++;
     }
     printf("%d", count);
}
