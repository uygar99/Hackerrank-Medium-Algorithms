#include <iostream>
using namespace std;

int main()
{
	int m,n,t;
	cin>>m>>n>>t;
	char str[202][202],str1[202][202],str2[202][202],str3[202][202];
	for(int i=0;i<m;i++)  cin>>str[i];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
	    {
	        str1[i][j]='O';
	        str2[i][j]='O';
	        str3[i][j]='O';
	    }
	}   
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	    {
		    if(str[i][j]=='O')
		    {
		        str2[i][j]='.';
		        if(i<m-1) str2[i+1][j]='.';
		        if(i>0)   str2[i-1][j]='.';
		        if(j<n-1) str2[i][j+1]='.';
		        if(j>0)   str2[i][j-1]='.';
		    }
	    }
	}
	for(int i=0;i<m;i++)
	{
	    for(int j=0;j<n;j++)
	    {
		    if(str2[i][j]=='O')
		    {
		        str3[i][j]='.';
		        if(i<m-1) str3[i+1][j]='.';
		        if(i>0)   str3[i-1][j]='.';
		        if(j<n-1) str3[i][j+1]='.';
		        if(j>0)   str3[i][j-1]='.';
		    }
	    }
	}
	if(t==1||t==0)
	{
	    for(int i=0;i<m;i++)  cout<<str[i]<<"\n";
	    return 0;
	}
	if((t-1)%4==0) for(int i=0;i<m;i++)  cout<<str3[i]<<"\n";
	else if((t-1)%2==0) for(int i=0;i<m;i++)  cout<<str2[i]<<"\n";
	else for(int i=0;i<m;i++)    cout<<str1[i]<<"\n";
	return 0;
}
