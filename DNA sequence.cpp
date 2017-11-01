#include <bits/stdc++.h>

using namespace std;


int main()
{
	int k,m;

	

	while(cin>>k>>m)
	{
		vector<string> validDna; 

		if(k == 0 && m == 0)
			return 0;

		while(k--)
		{
			int copies;
			string dna;
			int count = 0;

			cin>>copies>>dna;
			while(dna.length() >= m)
			{
				//if not found
				if(validDna.find(dna) == validDna.end())
				{

					validDna.insert(dna);
					count++;
				}
				if(count == copies)
					break;

				dna.pop_back();
			}


		}
		cout<< validDna.size() <<"\n";


	}
	return 0;
}