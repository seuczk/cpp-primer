#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str("hello world");
	for(auto &a : str)
		a = 'X';
	cout << str << endl;
	return 0;
}
