# include <bits/stdc++.h>
using namespace std;
int main()
{
    int m1[1000] , m2[1000] , i , j , T , c;
    long long int N1 , N2 ;
    cin >> T;
    while(T--){
        int dif = 1000000;
        cin >> N1;
        for(i=0 ; i < N1 ; i++){
            cin >> m1[i];
        }
        cin >> N2;
        for(i=0 ; i < N2 ; i++){
            cin >> m2[i];
        }
        for(i=0 ; i < N1 ; i++){
            for(j=0 ; j< N2 ; j++){
                c =abs ( m1[i] - m2[j]);
                if (c < dif){
                    dif = c;
                }
            }
        }
        cout << dif << endl;
    }
}
