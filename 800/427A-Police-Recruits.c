//Problem 427A-Police-Recruits
//Difficulty: 800
//Topic: Implemetation


#include <stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	int police=0;
	int crime=0;
	while(n--)
	{
		scanf("%d",&a);
		if(a > 0)
			police += a;
		else
		{
			if(police > 0)
				police--;
			else
				crime++;
		}
	}
	printf("%d",crime);
	return 0;
}
