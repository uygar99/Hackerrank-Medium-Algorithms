#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int ch[n]; 
    int ca[n]; 
    int ccount=1; 
    ca[0]=1;
    cin >> ch[0];
    for (int i=1;i<n;i++) 
	{
        cin >> ch[i];
        if (ch[i]>ch[i-1]) ccount++;
        else if (ch[i]<=ch[i-1]) ccount=1;
        ca[i]=ccount;
    }
    ccount=1;
    long long counter = ca[n-1];
    for (int i=n-2;i>=0;i--) 
	{
        if (ch[i]>ch[i+1]) ccount++;
        else if (ch[i]<=ch[i+1]) ccount=1;
        ca[i]=(ccount>ca[i]?ccount:ca[i]);
        counter+=ca[i];
    }    
    cout << counter;
    return 0;
}
