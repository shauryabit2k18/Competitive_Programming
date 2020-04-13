# include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long int n , out , k;
        cin >> n;
        k = n/2;
        out = k+1;
        if(n == 2)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << out << endl;
        }
    }
}
