//Problem 1742A-Sum
//Difficulty: 800
//Topic: Implemetation

#include <stdio.h>
int main()
{
	int a,b,c,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d %d", &a,&b,&c);
		if(a + b == c || a + c == b || c + b == a)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
