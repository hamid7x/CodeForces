//Problem 136A-Presents
//Difficulty: 800
//Topic: Implemetation

#include <stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	int p[n];
	for(int i = 0; i < n; i++)
		scanf("%d",&p[i]);
	for(int i = 0; i < n; i++)
	{
		int target = i + 1;
		for(int j = 0; j < n; j++)
		{
			if(p[j] == target)
				printf("%d ", j + 1);
		}
	}
}
