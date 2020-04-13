#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int t;
	cin >> t;
	while(t--){
		long long int a , b;
		cin >> a >> b;
		if (a < b){
			cout << "<" << endl;
			continue;
		}
		if (a == b){
			cout << "=" << endl;
			continue;
		}
		if (a > b){
			cout << ">" << endl;
			continue;
		}
	}
	return 0;
}