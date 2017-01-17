#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//array
	int arr[10];
	for(int i=0; i<10; ++i) arr[i] = i;
	int arr2[10];
	for(int i=0; i<10; ++i) arr2[i] = arr[i];

	//vector
	vector<int> ivec(10);
	for(int i=0; i!=10; ++i) ivec[i] = arr[i];
	vector<int> ivec2(ivec);
	for(auto j: ivec2) cout << j << " ";
	cout << endl;

	return 0;
}
