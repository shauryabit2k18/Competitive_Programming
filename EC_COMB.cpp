# include <bits/stdc++.h>
using namespace std;

int main()
{
    int N , input , a[64] , i , j , output , rem;
    cin >> N;
    while(N--){
        cin >> input;
        if(input%2 != 0){
            cout << input << endl;
        }
        else
        {
            i = 0;
            while(input>0){
                rem = input%2;
                a[i] = rem;
                i++;
                input /= 2;
            }
            output = 0;
            for(j =i-1 ; j>=0 ; j--){
                output = output + pow(2,i-j-1)*a[j];
            }
            cout << output << endl;
        }
    }
    return 0;
}
