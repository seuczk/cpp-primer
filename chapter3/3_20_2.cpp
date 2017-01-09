#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec;
	int i;
	while(cin >> i)
		ivec.push_back(i);

	if ((ivec.size() % 2) == 0)
	{
		for(decltype(ivec.size()) n = 0; n < ivec.size() / 2; ++n)
			cout << ivec[n] + ivec[ivec.size() - 1 - n] << " ";
	}
	else{
		for(decltype(ivec.size()) n = 0; n < ivec.size() / 2 + 1; ++n)
			cout << ivec[n] + ivec[ivec.size() - 1 - n] << " ";
	}

	cout << endl;
	return 0;
}
