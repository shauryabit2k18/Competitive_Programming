# include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long int n , r , q,p , out = 0, cnt = 0;
        cin >> n;
        q=n;
        p=n;
        for(int i=0 ; i <7 ; i++)
        {
            if(p>9){
                p = p/10;
                cnt++;
            }
        }
        for(int i=0 ; i <= cnt ; i++)
        {

                r = q%10;
                out = out + r * pow(10 , cnt-i);

                if(q<10)
                {
                    break;
                }
                q = q/10;
            }



        cout << out <<endl;
    }}
