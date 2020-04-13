# include <bits/stdc++.h>

using namespace std;

int main()
{
    int t , a , b , c;
    cin >> t;
    if(t>=1 && t<=1000)
    {
        while(t>=1)
        {
            cin >> a >> b;
            if(a>=1 && a<=10000 && b>=1 && b<=10000)
            {
                c = a+b;
                cout << c << endl;
            }
            t = t-1;
        }
    }
    return 0;
}
