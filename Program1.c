#include<stdio.h>
int ans=0;
int placevalue=1;
int rec(int n,int digit)
{
	
	if(n<=0)
	{
		return ans;
	}
	int rem=n%10;
	if(rem<digit)
	{
		ans=rem*placevalue+ans;
		placevalue=placevalue*10;
		return rec(n/10,digit);
	}
	return rec(n/10,digit);
	
	
}
int main()
{
	int n;
	scanf("%d",&n);
	int digit ;
	scanf("%d",&digit);
	int ans=rec(n,digit);
	printf("%d",ans);
	return 0;
}
