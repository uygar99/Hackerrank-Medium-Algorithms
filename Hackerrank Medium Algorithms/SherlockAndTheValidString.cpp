#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main()
{  
	string s; 
	cin >> s;
	vector<int> v(26,0);
	for(int i=0;i<s.length();i++) 
	{
		v[(int)(s[i] - 'a')]++;
	}
	sort(v.begin(), v.end());
	v.erase(remove(v.begin(), v.end(),0) , v.end());
	if(v.back()==v.front()) cout<<"YES\n";
	else if((v.back()-v.front()==1)&&(v[v.size()-1]!=v[v.size()-2])) cout<<"YES\n";
	else if(v[0]==1 && (v[1]== v[v.size()-1])) cout<<"YES\n";
	else cout<<"NO\n";
	return 0;
}
