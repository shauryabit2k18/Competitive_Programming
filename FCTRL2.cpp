# include <bits/stdc++.h>

using namespace std;

int multiply(int x, int res[], int res_size);

// This function finds factorial of large numbers
// and prints them
void factorial(int n)
{
    int res[500];
    res[0] = 1;
    int res_size = 1;
    for (int x=2; x<=n; x++)
        res_size = multiply(x, res, res_size);

    for (int i=res_size-1; i>=0; i--)
        cout << res[i];
}

int multiply(int x, int res[], int res_size)
{
    int carry = 0;
    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry  = prod/10;
    }

    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
int main()
{
    int t , i;
    cin >> t;
    int n[t];
    for (i = 0 ; i < t ; i++)
    {
        cin >> n[i];

    }
    for (i = 0 ; i < t ; i++)
    {
        factorial(n[i]);
        cout<<"\n";
    }
    return 0;
}
