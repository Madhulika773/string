#include<stdio.h>
int ans=0;
int placevalue=1;
int rec(int n)
{
	if(n<=0)
	{
		return ans;
	}
	int rem=n%10;
	if(rem==0)
	{
		rem= 5;
		
	}
	ans=placevalue*rem+ans;
	placevalue=placevalue*10;
	return rec(n/10);
}
int main()
{
	int n;
	scanf("%d",&n);
	int ans=rec(n);
	printf("%d",ans);
	return 0;
	
}
