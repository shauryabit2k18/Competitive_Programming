# include <bits/stdc++.h>

using namespace std;

int main()
{
    long int t , i;
    cin >> t;
    long int n[t];
    for(i = 0 ; i < t ; i++){
        cin >> n[i];
    }
    int j = sizeof(n)/sizeof(n[0]);
    sort(n , n+j);
    for(i = 0 ; i < t ; i++){
        cout << n[i] << endl;
    }
}
