#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int main() {
    int row,col;
    string str;
    cin>>str;
    int len=str.length();
    row=sqrt(len);
    if(row*row==len) col=row;
    else col=row+1;
    if((row*col)<len) row++;
    for(int i=0;i<col;i++)
    {
        for(int j=i;j<len;j+=col)
        {
            cout<<str[j];
        }
        cout<<" ";
    }
    return 0;
}
