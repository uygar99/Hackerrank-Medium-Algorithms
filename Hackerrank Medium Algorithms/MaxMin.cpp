#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	long long int temp=100000000;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	for(int i=0;i+k-1<n;i++)
	{
		int max=v[i+k-1];
		int min=v[i];
		if(max-min<temp) temp=max-min;
	}
	cout<<temp;
}
