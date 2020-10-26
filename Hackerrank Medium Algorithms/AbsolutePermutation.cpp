#include <iostream>
using namespace std;

int main(){
    int size;
    cin >> size;
    for(int j = 0; j < size; j++){
        int n;
        int k;
        cin >> n >> k;
        int temp = k;
        if(k == 0)
		{
            for(int i = 1; i <= n; i++) cout << i << " ";
        }
		else if((n % (2*k)) == 0)
		{
            for(int i = 1; i <= n; i++)
			{
                cout << i + temp << " ";
                if(i % k == 0) temp = temp * -1;
            }        
        }
		else cout << -1;
        cout << endl;
    }
    return 0;
}
