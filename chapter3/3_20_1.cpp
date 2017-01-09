#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec;
	int i;
	while(cin >> i)
		ivec.push_back(i);

	for(decltype(ivec.size()) n = 0; n < ivec.size()-1; ++n)
		cout << ivec[n] + ivec[n+1] << " ";

	cout << endl;
	return 0;
}
