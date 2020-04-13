#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t ;
	long long int a , b , c , d;
	cin >> t ;
	for (int i = 0 ; i < t ; i++){
		cin >> a >> b;
		if (a <= b){
			c = b;
		}
		else{
			c = a;
		}
		d = a + b;
		cout << c << " " << d << endl;
	} 
	return 0;
}