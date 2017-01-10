#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> ivec;
	for(int i; cin >> i; ivec.push_back(i));

	for(auto it = ivec.begin(); it != ivec.end() - 1; ++it)
		cout << *it + *(it + 1) << " ";

	cout << endl;

	for(auto lit = ivec.begin(), rit = ivec.end() - 1; 
			lit <= rit; ++lit, --rit)
		cout << *lit + *rit << " ";

	cout << endl;

	return 0;
}
