//Problem 263A-Beautiful-Matrix
//Difficulty: 800
//Topic: Implementation

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int count = 0, i_th, j_th,n;

	for(int i = 0;i<5;i++)
	{
		for(int j = 0;j<5;j++)
		{
			scanf("%d", &n);
			if (n == 1)
			{
				i_th = i;
				j_th = j;
			}
		}
	}
	printf("%d", abs(2 - i_th) + abs(2 - j_th));
}
