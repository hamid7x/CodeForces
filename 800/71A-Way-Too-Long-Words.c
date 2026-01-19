//Problem 71A-Way-Too-Long-Words
//Difficulty: 800
//Topic: Strings

#include <stdio.h>
 
int str_len(char *s)
{
	int i = 0;
	while(s[i])
		i++;
	return i;
}
 
int main()
{
	int n;
	scanf("%d", &n);
	char s[100];
	int len;
 
	while(n--)
	{
		scanf("%s",s);
		len = str_len(s);
		if(len <= 10)
			printf("%s\n", s);
		else
			printf("%c%d%c\n", s[0],len-2,s[len-1]);
	}
}
