Binary to decimal


Input 11001
Output-> 25


placeValue = 1;
decimalNumber=0;

main(){
Int ans = rec(n);
printf(ans)

n=11001
rem=1;
decimalNumber = rem*placeValue + decimalNumber; // 1*(2^0) + 0=1
placeValue = placeValue*2;
Return rec(n/10)


n=1100
rem=0
decimalNumber = rem*placeValue + decimalNumber; // 0*(2^1) + 1=1
placeValue = placeValue*2;
Return rec(n/10)


n=110
rem=0
decimalNumber = rem*placeValue + decimalNumber;//0*(2^2)+1 = 1;
placeValue = placeValue*2;
Return rec(n/10)

n=11
rem=1
decimalNumber = rem*placeValue + decimalNumber;//1*(2^3)+1=9; nkaisw h
placevalue=placevalue*2
Return rec (n/10)


n=1
rem=1
decimalNumber = rem*placeValue + decimalNumber;//1*(2^4)+9=25;
placevalue=placevalue*2
Return rec (n/10)

if(n=0)
	return decimalNumber=25

