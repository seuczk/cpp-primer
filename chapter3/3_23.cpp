#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<int> ivec{1,2,3,4,5,6,7,8,9,10};

	for(auto it = ivec.begin(); it != ivec.end(); ++it)
		cout << *it * 2  << " ";

	cout << endl;

	return 0;
}
