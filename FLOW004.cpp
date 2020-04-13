# include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int i =0 ; i<t ; i++)
    {
        long int n;
        cin >> n;
        int last = n % 10;
        int first;
        long int c = n;
        for(int i = 0 ; i<6 ; i++)
        {
            if(c >=10)
            {
                c = c/10;
            }
            else
            {
                first = c;
                break;
            }
        }
        int output = first + last;
        cout << output << endl;
    }
}
