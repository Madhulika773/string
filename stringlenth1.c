#include<stdio.h>
int main()
{
	char s[100],a[100];
	int i,j;
	scanf("%s",s);
	scanf("%s",a);
	int length=0;
	for(i=0;s[i]!='\0';i++)
	{
		length=length+1;
	
	}
	
	int len=0;
	for(j=0;a[j]!='\0';j++)
	{
		len=len+1;
	
	}
    if(len<length)
    printf("%d",length);
    else
    printf("%d",len);
    return 0;
	
	
}
