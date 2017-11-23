#include <bits/stdc++.h>

using namespace std;
bool isNumber(char c)
{
    return (c >= '1' && c <= '9');

}
int main()
{

    int n;

    cin>>n;
    while(n--)
    {
        string CarNum;
        cin>>CarNum;
        if(CarNum.length() == 8 && CarNum[0] == CarNum[1] &&
           CarNum[4] >= 'A' && CarNum[4] <= 'Z' &&
           isNumber(CarNum[0]) && isNumber(CarNum[1]) &&
           isNumber(CarNum[2]) && isNumber(CarNum[3]) &&
           isNumber(CarNum[5]) && isNumber(CarNum[6]) &&
           isNumber(CarNum[7]))
        {

            cout<<CarNum<<"\n";
        }

    }

    return 0;

}
