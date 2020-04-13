#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m[1000] , f[1000] , o[1000] , t , n , i ;
    cin >> t;
    for (int j = 1 ; j <= t ; j++)
    {
    	int total = 0;
        cin >> n;
        for( i = 0 ; i < n ; i++)
        {
            cin >> m[i];
        }
        for(i = 0 ; i < n ; i++)
        {
            cin >> f[i];
        }
        for(i = 0 ; i < n ; i++)
        {
            o[i] = m[i] * f[i];
            total = total + o[i];
        }
        cout << total << endl;
    }
    return 0;
}