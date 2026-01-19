//Problem 4A-Watermelon
//Difficulty: 800
//Topic: brute force - math

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int i = 2;
	while(i < n)
	{
		if(n%i == 0)
		{
			int rem = n / i ;
			if(rem % 2 == 0)
			{
				printf("YES");
				return 0;
			}
		}
		i++;
	}
	printf("NO");
	return 0;
}
