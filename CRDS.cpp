# include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N,layers,cards,output;
    cin >> N;
    while(N--){
        cin >> layers;
        cards = (3*(layers*layers) + layers)/2 ;
        output = cards % 1000007;
        cout << output << endl;
    }
    return 0;
}
