#include <iostream>
using namespace std;

int main()
{
	int row,col;
	cin>>row>>col;
	int arr[row][col];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>arr[i][j];
		}
	}
	int maxcounter=0;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			int counter=0;
			if(arr[i][j]==1) counter++;
			if(i-1>=0 && arr[i-1][j]==1) counter++;
			if(j-1>=0 && arr[i][j-1]==1) counter++;
			if(j-1>=0 && i-1>=0 && arr[i-1][j-1]==1) counter++;
			if(i+1<row && j-1>=0 && arr[i+1][j-1]==1) counter++;
			if(i+1<row && arr[i+1][j]==1) counter++;
			if(i+1<row && j+1<col && arr[i+1][j+1]==1) counter++;
			if(j+1<col && arr[i][j+1]==1) counter++;
			if(i-1>=0 && j+1<col && arr[i-1][j+1]==1) counter++;
			if(counter>maxcounter) cout<<counter<<endl; 
		}
	}
	cout<<maxcounter;
	return 0;
}
