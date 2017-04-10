#include <iostream>
#include <string>
using namespace std;

int main()
{
	string word, preword;
	while (cin >> word)
		if (word == preword) 
			break; 
		else 
			preword = word;

	if (cin.eof())  
		cout << "no word was repeated." << endl;
	else            
		cout << word << " occurs twice in the sentence." << endl;

	return 0;
}
