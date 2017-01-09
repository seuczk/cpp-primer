#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::cin;
using std::string;

int main()
{
	vector<string> ivec;
	for(string s; cin >> s; ivec.push_back(s));

	return 0;
}
