#include <stdio.h>
int placevalue=1,rem;
int decimalnumber=0;
int rec(int num)

{

	 if(num==0)
	 {
		return decimalnumber;
	 }
    rem=num%10;
	decimalnumber=rem*placevalue+decimalnumber;
	placevalue=placevalue*2;
	return rec(num/10);
	
}

int main() 
{
	int n;
	scanf("%d",&n);
	int ans=rec(n);
	printf("%d",ans);
	return 0;
}

