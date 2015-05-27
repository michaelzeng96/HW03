#include <iostream>
#include <string>
#include <string.h>
#include <assert.h>

using namespace std;

string sort(string& s)
{
	for (int i = 1; i < s.length(); i++)
	{
		int iSattlite = s[i];

		int j = i;
		while (--j >= 0 && s[j]>iSattlite)
			s[j + 1] = s[j];

		s[j + 1] = iSattlite;
	}

	return s;

}



int main()
{
	string test;
	cout << "Enter a string s: ";
	getline(cin, test);
	cout << "The sorted string is " << sort(test) << endl;


	return 0;
}