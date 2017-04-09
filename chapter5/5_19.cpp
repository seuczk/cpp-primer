#include <iostream>
using namespace std;

int main()
{
	string str1, str2;
	cout << "Please input two strings: "; 
	do{
		cout << "The smaller string is " << ((str1.length() >= str2.length())?str2:str1) << endl;
	}
	while(cin >> str1 >> str2);
	return 0;
}
