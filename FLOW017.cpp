# include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int a , b , c;
        cin >> a;
        cin >> b;
        cin >> c;
        if ((b>=a && c<=a) || (c>=a && b<=a))
        {
            cout << a << endl;
        }
        if ((a>=b && c<=b) || (c>=b && a<=b))
        {
            cout << b << endl;
        }
        if ((b>=c && a<=c) || (a>=c && b<=c))
        {
            cout << c << endl;
        }
    }
}
