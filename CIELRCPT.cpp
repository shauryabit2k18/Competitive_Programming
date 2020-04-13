# include <bits/stdc++.h>
using namespace std;

int main()
{
    int t , k ;
    cin >> t;
    while(t--)
    {
        long int n , ans = 0;
        cin >> n;
        for(k=11 ;  k>=0 ; k--)
        {
            int p = pow(2 , k);
            if(n - p >= 0)
            {
                n = n-p;
                ans ++;
                k++;
            }

        }
        cout << ans << endl;
    }
}
