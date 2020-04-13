

#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin >> t;
	while(t--){
		int a , c = 0;
		cin >> a;
		int ans = 0;
		if (a/100 !=0){
			c = c + (a/100);
			a = a % 100;
		}
		if (a/50 !=0){
			c = c + (a/50);
			a = a % 50;
		}
		if (a/10 !=0){
			c = c + (a/10);
			a = a % 10;
		}
		if (a/5 !=0){
			c = c + (a/5);
			a = a % 5;
		}
		if (a/2 !=0){
			c = c + (a/2);
			a = a % 2;
		}
		if (a/1 !=0){
			c = c + (a/1);
			a = a % 1;
		}
		
		ans =  ans + c;
		cout << ans << endl;


	}
	return 0;
}