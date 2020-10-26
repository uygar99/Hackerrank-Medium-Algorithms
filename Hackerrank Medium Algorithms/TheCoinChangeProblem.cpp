#include <iostream>
#include <vector>
using namespace std;
int main() 
{
    int n,m;
    cin >> n >> m;
    vector <long> c(m);
    vector <long> arr(n+1);
    for (int i=0;i<m;i++) cin >> c[i];
    arr[0]=1; 
    for (int i=0;i<m;i++) 
	{
        for (int j=c[i];j<=n;j++) 
		{
            arr[j]+=arr[j-c[i]]; 
        }
    }    
    cout << arr[n];    
    return 0;
}
