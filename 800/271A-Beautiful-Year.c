//Problem 271A-Beautiful-Year
//Difficulty: 800
//Topic: Brute force

#include<stdio.h>

int is_beatiful_year(int n)
{
        int lookup[10]={0};
        while(n!=0)
        {
                int rem = n%10;
                lookup[rem] += 1;
		if(lookup[rem] >= 2)
			return 0;
                n = n/10;
	}
	return 1;	
}
