#include <iostream>
using namespace std;
int main()
{
	int size;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int j=0;j<n;j++)
		{
			cin>>arr[j];
		}
		int max=0;
		int counter=0;
		for(int j=0;j<n;j++)
		{
			if(arr[j]>max) 
			{
				counter++;
				max=arr[j];
			}
		}

		if(counter%2==0) cout<<"ANDY"<<endl;
		else cout<<"BOB"<<endl;	
	}
	return 0;
}
