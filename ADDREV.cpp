#include <bits/stdc++.h>
using namespace std;

int rev(int input)
{
    int rev = 0 , rem;

    while (input > 0){

        rem = input % 10;
        rev = (rev * 10) + rem;
        input /= 10;

    }

    return rev;
}
int main()
{
	int N , input1 , input2 , output;
	cin >> N;
	while(N--){
        cin >> input1 >> input2;
        input1 = rev(input1);
        input2 = rev(input2);
        output = input1 + input2;
        output = rev(output);
        cout << output << endl;
	}
	return 0;
}
