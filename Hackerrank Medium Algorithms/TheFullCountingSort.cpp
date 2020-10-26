#include <iostream>
using namespace std;

int main() {
    long int size;
    cin>>size; 
    string arr[size];
    for(long int i=0;i<size/2;i++)
	{
        int index;
        cin>>index;
        string str;
        cin>>str;
        arr[index]=arr[index]+"-"+" ";
    }
    for(long int i=0;i<size/2;i++)
	{
        int index;
        cin>>index;
        string str;
        cin>>str;
        arr[index]=arr[index]+str+" ";
    }
    for(long int i=0;i<size;i++) cout<<arr[i];
    return 0;
}
