#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int size;
    cin>>size;
    for(int i=0;i<size;i++)
	{
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int max1=a[0];
        int b[n];
        b[0]=a[0];
        for(int i=1;i<n;i++)
		{
            b[i]=max(a[i],a[i]+b[i-1]);
            max1=max(max1,b[i]);
        }
        cout<<max1<<" ";
        sort(a.begin(),a.end());
        int c;
        for(int i=n-1;i>=0;i--)
		{
            if(a[i]<0)
			{
                c=n-i;
                break;
            }
        }
        int s=0;
        if(c==n)
		{
            for(int i=n-1;i>=0;i--)
            if(a[i]<0)
			{
                s=a[i];
                break;
            }
        }
        else
		{
            for(int i=n-1;i>=0;i--)
			{
                if(a[i]>0) s+=a[i];
                else break;
            }
        }
        if(s==0) s=a[n-1];
        cout<<s<<endl;
    }
}
