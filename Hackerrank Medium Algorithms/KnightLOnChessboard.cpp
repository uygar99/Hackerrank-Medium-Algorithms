#include <iostream>
using namespace std;

int arr[25][25];
int stx,sty;
void initial(int n) {
  for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++) arr[i][j] = -1;
}
void knight(int a, int b, int num , int n) {
  	if(a < 0 || b < 0 || a > n-1 || b > n-1) return;
  	if(arr[a][b] != -1) 
  	{
    	if(arr[a][b] > num) arr[a][b] = num;
    	else return;
  	}
  	arr[a][b] = num;
  	knight(a-stx,b-sty,num+1, n);
	knight(a+stx,b-sty,num+1, n);
  	knight(a-stx,b+sty,num+1, n); 
	knight(a+stx,b+sty,num+1, n);
  	knight(a-sty,b-stx,num+1, n); 
	knight(a+sty,b-stx,num+1, n);
  	knight(a-sty,b+stx,num+1, n); 
	knight(a+sty,b+stx,num+1, n);
}
int main() {
	int size;
  	cin >> size;
  	for(int i = 1; i < size; i++) 
	{
    	for(int j = 1; j < size; j++) 
		{
      	stx = i, sty = j;
      	initial(size);
      	knight(size-1, size-1, 0, size);
      	cout << arr[0][0] << " ";
    	}
    	cout << endl;
  	}
  	return 0;
}
