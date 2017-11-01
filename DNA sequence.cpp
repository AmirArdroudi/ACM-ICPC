#include <bits/stdc++.h>

using namespace std;


int main()
{
    int k,m;
    string DNA;
    while(cin>>k>>m)
    {

        if(k == 0 && m == 0)
            return 0;
        set<string> validDNA;

        while(k--)
        {
            int copies;
            int counter = 0;
            cin>>copies>>DNA;

            while(DNA.length() >= m)
            {
                //if DNA not found in set
                if(validDNA.find(DNA) == validDNA.end())
                {
                    validDNA.insert(DNA);
                    counter++;
                }
                if(copies == counter)
                    break;
                DNA.pop_back();
            }

        }
        cout<<validDNA.size()<<"\n";

    }
    return 0;
}
