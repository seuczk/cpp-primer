#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str("hello world");

	decltype(str.size()) i = 0;
	while(i < str.size())
		str[i++] = 'X';
	cout << str << endl;

	for(decltype(str.size()) i = 0; i < str.size(); ++i)
		str[i] = 'Y';
	cout << str << endl;

	return 0;
}
