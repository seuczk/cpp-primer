#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n = 0;
	vector<int> ivec{0,1,2,3,4,5,6,7,8,9};
	int arr[ivec.size()];

	for (auto i : ivec)
	{
		arr[n] = i;
		cout << arr[n] << " ";
		++n;
	}
	//for(int i=0; i < ivec.size(); ++i)  arr[i] = ivec[i];
	//for(auto i : arr)  cout << i << " ";

	cout << endl;

	return 0;
}
