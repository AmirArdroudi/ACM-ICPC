#include <iostream>

using namespace std;

int main()
{
    int income;

    while(cin>>income)
    {
        if( income == 0)
            return 0;

        if(income <= 1000000)
            cout<<income<<"\n";
        else if(income > 1000000 && income <= 5000000)
            cout<<income -(income/10)<<"\n";
        else if( income > 5000000)
            cout<<(income - (income/5))<<"\n";
    }
    return 0;
}
