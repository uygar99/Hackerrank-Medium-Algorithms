#include <iostream>
using namespace std;

int main() 
{
    int size = 0, k = 0, i = 0;
    cin>>size>>k;
    int cities[size] = {0};
    while(i<size) cin>>cities[i++];
    int count = 0, pre = 0;
    i = 0;
    while(i < size)
    {
        int j = min(i+k-1, size-1);
        while(j>=pre && !cities[j]) j--;
        if(j < pre) 
		{ 
			cout<<-1<<endl; 
			return 0;
		}
        count++;
        pre = i+k-1;
        i = j+k;
    }
    cout<<count<<endl;
    return 0;
}
