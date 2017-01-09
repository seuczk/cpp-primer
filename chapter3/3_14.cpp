#include <iostream>
#include <vector>
using std::vector;
using std::cin;

int main()
{
	vector<int> ivec;
	for(int i; cin >> i; ivec.push_back(i));

	return 0;
}
