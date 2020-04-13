# include <bits/stdc++.h>

using namespace std;

int main()
{
    int i , t , m;

    cin >> t;
    while(t--)
    {
    	long long int o =0;

        cin >> m;
        int x = to_string(m).length();
        int n[x];
        for(i = 0 ; i < x ; i++)
        {
            n[i] = m%10;
            m = m/10;
        }
        for(i = 0 ; i < x ; i++)
        {
            o = o + n[i];
        }
        cout << o << endl;
    }
}
