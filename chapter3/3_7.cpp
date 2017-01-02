#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str("hello world");

	//while
	decltype(str.size()) i = 0;
	while(i < str.size())
		str[i++] = 'X';
	cout << str << endl;

	//for
	for(decltype(str.size()) i = 0; i < str.size(); ++i)
		str[i] = 'X';
	cout << str << endl;
	return 0;
}
