# include <bits/stdc++.h>
# include <iomanip>
# include <math.h>

using namespace std;
int main()
{
    double y , n , x;
    int a;
    cin >> a >> y;
    x = double(a);
    if(x > 0.0 && x <=2000.0 && y >= 0.0 && y <=2000.0 )
    {
        if(fmod(x , 5.0) != 0.0 || (y-x) <= 0.5)
        {
            cout << setprecision(2) << fixed << y;
        }
        else
        {
            n = y-(x+0.5);
            cout << setprecision(2) << fixed <<n;
        }
        return 0;
    }

}
