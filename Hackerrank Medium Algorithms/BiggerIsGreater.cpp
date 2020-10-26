#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() 
{
	int size;
	cin >> size;
	string str;
	for(int i=0;i<size;i++)
	{
		cin >> str;
		bool flag = next_permutation(str.begin(), str.end());
		if (flag == false)
		{
		    cout << "no answer" << endl;
		}
		else
		{
		    cout << str << endl;
		}
	}
	return 0;
}
