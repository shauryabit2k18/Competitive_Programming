# include <bits/stdc++.h>

using namespace std;

int main()
{
    long int t;
    cin >> t;
    while(t--)
    {
        long long int n , r , q ;
        int count = 0;
        cin >> n;
        q=n;
        if(q==4)
        {
            count ++;
        }
        else
        {
            for(int i = 0 ; i<9 ; i++)
            {
                r = q%10;
                if(r == 4)
                {
                    count++;
                }
                q = q/10;
            }
        }
       cout << count << endl;
    }
}
