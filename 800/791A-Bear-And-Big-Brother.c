//791A-Bear-And-Big-Brother
//Difficulty: 800
//Topic: Implemetation

#include <stdio.h>

int main()
{
	int a,b, year = 0;
	scanf("%d %d", &a,&b);
	while(b >= a)
	{
		year++;
		a *= 3;
		b *= 2;
	}
	printf("%d", year);
}
