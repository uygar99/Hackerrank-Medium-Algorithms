#include <iostream>
using namespace std;

int main()
{
	long long int num;
	cin>>num;
	long long int counter=1;
	long long int c0=0;
	for(long long int i=1;i<=num;i++)
	{
		if(counter%10==0) 
		{
			counter=counter/10;
			c0++;
		}
		counter=counter*i;	
	}
	cout<<counter;
	for(long long int i=0;i<c0;i++) cout<<0;
	return 0;
}
