#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int size,fark;
	cin>>size>>fark;
	vector<int> arr(size);
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
	}
	sort(arr.begin(),arr.end());
	int counter=0;
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++) 
	    {
	        int diff = arr[j] - arr[i];
	        if (diff == fark) 
	        {
	            counter++;
	            break;
	        } 
	        else if (diff > fark) break;
	        else;
	    }
	}
	cout<<counter;
 	return 0;
}
