#include <iostream>
using namespace std;

int ansSoFar=0;
int placeValue=1;

int rec(int n){
	if(n<=0){
		return ansSoFar;
	}
	int rem = n%10;
	if(rem == 0){
		rem = 5;
	}
	ansSoFar = rem*placeValue + ansSoFar;
	placeValue = placeValue*10;
	return rec(n/10);
}
int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		ansSoFar = 0;
		placeValue = 1;
		int ans=rec(n);
		cout<<"ans="<<ans<<endl;
	}
	return 0;
}
