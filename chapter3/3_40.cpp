#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char arr1[] = "Hello";
	char arr2[] = "Hala";
	int new_size = strlen(arr1) + strlen(arr2) + 1;
	char new_char[new_size];

	strcpy(new_char, arr1);
	strcat(new_char, " ");
	strcat(new_char, arr2);

	cout << new_char << endl;

	return 0;
}
