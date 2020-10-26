#include<iostream>
#include<vector>
using namespace std;

int main() 
{  
    int size;
    cin>>size;
    for(int u=0;u<size;u++)
	{
        int r1,c1,r2,c2;
        cin>>r1>>c1;
        vector<string> s(r1);
        for(int i=0;i<r1;i++) cin>>s[i];
        cin>>r2>>c2;
        vector<string> p(r2);
        for(int i=0;i<r2;i++) cin>>p[i];
        
        for(int i=0;i<=r1-r2;i++)
		{
            for(int j=0;j<=c1-c2;j++)
			{
                bool flag=false;
                if(s[i][j]==p[0][0] && s[i].substr(j,c2)==p[0])
				{
                    int temp=i+1,k;
                    for(k=1;k<r2;k++)
					{
                        if(s[temp++].substr(j,c2)!=p[k]) break;
                    }
                    if(k==r2)
					{
                        flag=true;
                        break;
                    }
                }
            }
            if(flag) break;
        }
        if(flag) cout<<"YES\n";
		else cout<<"NO\n";
    }
    return 0; 
}
