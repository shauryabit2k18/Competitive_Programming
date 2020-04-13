# include <bits/stdc++.h>

using namespace std;

int main()
{
    int t , i , j;
    cin >> t;
    int a[t] , b[t];
    for (i=0 ; i <t ; i++)
    {
        cin >> a[i] >> b[i];
        cout << (a[i] % b[i]) <<endl;
    }
}
