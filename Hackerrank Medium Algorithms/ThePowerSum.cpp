#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

int powerSum(int X, int P, int N=1) {
    int ipow = pow(N,P);
    if (ipow > X)
        return 0;
    else if (ipow == X)
        return 1;
    return powerSum(X,P,N+1) + powerSum(X-ipow,P,N+1);
}

int main() {
    int X,N;
    cin>>X>>N;
    cout<<powerSum(X,N,1);
    return 0;
}
