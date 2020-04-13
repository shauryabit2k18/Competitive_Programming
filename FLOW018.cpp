
#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin >> t;
    while(t--){
    	int i = 1 , f = 1 , num;
    	cin >> num;
    	while(i <= num){
    		f = f*i;
    		i++;
    	}
    	cout << f << endl;
    }
    return 0;
}