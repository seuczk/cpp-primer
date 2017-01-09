#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector<string> svec;
	string s;

	while(cin >> s)
		svec.push_back(s);

	for(decltype(svec.size()) i = 0; i < svec.size(); ++i)
	{
		for(auto &c : svec[i])
			c = toupper(c);
		cout << svec[i] << endl;
	}

	return 0;
}
