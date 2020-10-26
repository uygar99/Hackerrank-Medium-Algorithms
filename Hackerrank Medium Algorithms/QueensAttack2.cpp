#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n,k,rQ,cQ;
    cin >> n >> k >> rQ >> cQ;
    int t = n-rQ;
    int l = cQ-1;
    int b = rQ-1; 
    int r = n-cQ; 
    int bl = min (cQ, rQ) -1; 
    int br = min (rQ-1, n-cQ);
    int tl = min (n-rQ, abs(1-cQ));
    int tr = n - max(cQ, rQ);
    for(int i = 0; i < k; i++){
        int rOb;
        int cOb;
        cin >> rOb >> cOb;
        if (rOb == rQ)
        {
            if (cOb > cQ)
                r = min (r, cOb-cQ-1); 
            if (cOb < cQ)
                l = min (l, cQ-cOb-1); 
        }
        if (cOb == cQ)
        {
            if (rOb > rQ) 
                t = min (t, rOb-rQ-1);
            if (rOb < rQ)
                b = min (b, rQ-rOb-1);
        }
        if (abs(cQ-cOb) == abs(rQ-rOb))
        {
            if  (rOb > rQ)
			{  
                if  (cOb < cQ) 
                    tl = min(tl, rOb-rQ-1);
                if  (cOb > cQ)
                    tr = min(tr, cOb-cQ-1);
            }        
            if  (rOb < rQ)
			{
                if  (cOb < cQ)
                    bl = min(bl, cQ-cOb-1);               
                if  (cOb > cQ) 
                    br = min(br, cOb-cQ-1);              
          	}
        }
    }
    cout << t+r+b+l+bl+br+tr+tl; 
    return 0;
}
