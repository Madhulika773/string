#include<stdio.h>
int main()
{
	char s[100],i;
	scanf("%s",s);
	int length=0;
	for(i=0;s[i]!='\0';i++)
	{
		length=length+1;
	
	}
	printf("%d",length);
	return 0;
}
