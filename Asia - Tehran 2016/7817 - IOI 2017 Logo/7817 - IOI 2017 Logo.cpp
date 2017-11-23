#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
bool comp(pair<ll,ll> a, pair<ll,ll> b)
{
    return a.second < b.second;

}

int main()
{

	int n,numlogo;
	ll logoID;

	while(true)
    {
        map<ll,ll> pointMap;
        cin>>n;
        if(n == 0) return 0;

        while(n--)
        {
            cin>>numlogo;

            for(int i = 0; i < numlogo; i++)
            {
                ll points = 0;
                cin>>logoID;
                if(pointMap.find(logoID) == pointMap.end())
                    pointMap[logoID] = 0;
                pointMap[logoID] += pow(10, (2 - i) * 3) + pow(10, 9)* (3 - i);
            }
        }

        int maxpoint = 0;
        vector<ll> v;
        v.clear();

        vector<pair<ll, ll>> pairs;
        for (auto itr = pointMap.begin(); itr != pointMap.end(); ++itr)
            pairs.push_back(*itr);
        sort(pairs.begin(),pairs.end(), [=](pair<ll, ll>& a, pair<ll, ll>& b)
            {
                return a.second > b.second;
            }
        );
            vector<ll> f;
            for(int j = 0; j < pairs.size(); j++)
            {
                if(pairs[0].second == pairs[j].second)
                {
                    f.push_back(pairs[j].first);
                }
                else
                    break;
            }
            for(int j = 0;j < f.size(); j ++)
            {
                cout << f[j];
                if(j != f.size() - 1)
                    cout << " ";
            }
            cout << '\n';
    }

    return 0;
}
