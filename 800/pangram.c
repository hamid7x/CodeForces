#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	n++;
	char s[n];
	scanf("%s",s);
	char lookup[26]={0};
	for(int i = 0;i<n-1;i++)
	{
		if(s[i] >= 65 && s[i] <= 90)
			s[i] = s[i] + 32;
		int index = s[i] - 'a';
		lookup[index] = 1;
	}
	int test = 1;
	for(int i = 0;i<26;i++)
	{
		if(lookup[i] == 0)
		{
			test = 0;
			break;
		}
	}
	printf("%s", test ? "YES": "NO");
}
