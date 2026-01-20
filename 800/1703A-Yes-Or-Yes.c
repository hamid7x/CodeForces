//Problem: 1703A-Yes-Or-Yes
//Difficulty: 800
//Topic: brute force, implementation, strings

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
	int n;
	char s[4];
	scanf("%d", &n);
	while(n--)
	{
		scanf("%s", s);
		int i = 0;
		while(s[i])
		{
			s[i] = tolower(s[i]);
			i++;
		}
		printf("%s\n", strcmp(s, "yes") == 0?"YES":"NO");
	}
}
