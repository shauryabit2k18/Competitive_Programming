# include <bits/stdc++.h>

using namespace std;

int main()
{
    long int n , i;
    int j , win;
    cin >> n;
    int s[n] , t[n] , w[n] , l[n];
    for(i=0 ; i < n ; i++)
    {
        cin >> s[i] >> t[i];
    }
    int S[n];
    S[0] = s[0];
    for(i=1 ; i < n ; i++)
    {
        S[i] = s[i] + S[i-1];
    }

    int T[n];
    T[0] = t[0];
    for(i=1 ; i < n ; i++)
    {
        T[i] = t[i] + T[i-1];
    }

    for(i=0 ; i < n ; i++)
    {
        if(S[i] > T[i])
        {
            l[i] = S[i] - T[i];
            w[i] = 1;
        }
        else
        {
            l[i] = T[i] - S[i];
            w[i] = 2;
        }
    }

    int high = l[0];
    win = w[0];


    for(i=1 ; i<n ; i++)
    {
        if(l[i] > high)
        {
            high = l[i];
            win = w[i];
        }
    }
    cout << win << " " << high <<endl;

}
