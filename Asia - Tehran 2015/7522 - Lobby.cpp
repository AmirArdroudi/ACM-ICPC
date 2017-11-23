#include <iostream>

using namespace std;

int main()
{
    int n,m,k;
    int asses, toWin;

    while(cin>>n>>m>>k)
    {
        if(n == 0 && m == 0 && k == 0)
            return 0;

        asses = n - (m + k);

        toWin = (n / 2) + 1;

        if(m + asses < toWin)
            cout<< -1<<"\n";
        else if(m >= toWin)
        {
            cout<<0<<"\n";
        }
        else if(m + asses >= toWin)
            cout<<toWin - m<<"\n";


    }
    return 0;
}
