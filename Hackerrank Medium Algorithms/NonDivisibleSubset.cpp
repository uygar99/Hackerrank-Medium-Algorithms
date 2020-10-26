#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    int rem[k]={0};
    for(int i=0;i<n;i++)
	{
        int x;
        cin>>x;
        rem[x%k]++;
    }
	int counter = min(rem[0],1);
    if(k%2 == 0)
	{
    	for(int i=1;i<k/2;i++)
		{
            counter += max(rem[i],rem[k-i]);
        }
        counter += 1; 
    }
    else
	{
        for(int i=1;i<(k/2)+1;i++)
		{
            counter += max(rem[i],rem[k-i]);
        }
    }
    cout<<counter;
    return 0;
}
