#include <iostream>
using namespace std;

int main()
{
	int size;
	cin>>size;
	for(int u=0;u<size;u++)
	{
		int len;
		cin>>len;
		int arr[len];
		for(int i=0;i<len;i++)
		{
			cin>>arr[i];
		}
		for(int i=0;i<len-2;i++)
        {
            int k1=arr[i],k2=arr[i+1],k3=arr[i+2];
            if(k2<k1 && k2<k3)
            {
                arr[i+1]=k3;
                arr[i+2]=k1;
                arr[i]=k2;
                i=-1;
            }
            else if(k3<k1 && k3<k2)
            {
                arr[i+1]=k1;
                arr[i+2]=k2;
                arr[i]=k3;
                i=-1;
            }
        }
        if(arr[len-3]<arr[len-2] && arr[len-2]<arr[len-1])
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
	}	
	return 0;
}

