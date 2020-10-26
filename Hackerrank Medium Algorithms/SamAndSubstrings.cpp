#include<iostream> 
using namespace std; 

int main() 
{ 
	int mod=1000000007;
    string s;
    cin>>s;
   	int n=s.size();
   	long long int a[n],b[n];
   	a[0]=1,b[0]=1;
   	for(int i=1;i<n;i++)
	{
       a[i]=(10*a[i-1])%mod;
       b[i]=(b[i-1]+a[i])%mod;
   	}
  	long res=0;
   	for(int i=0;i<n;i++)
	{
       res+=((s[i]-'0') * b[n-i-1] * (i+1)) % mod;
       res%=mod;
    }
   cout<<res;
   return 0;
} 
