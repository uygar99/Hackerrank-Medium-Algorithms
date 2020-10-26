#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {   
    int n;
    cin >> n;
    string s;
    cin >> s;
    int left=0;
    int right=0;
    int temp=n;
    int i;
    int acnt=0;
    int tcnt=0;
    int gcnt=0;
    int ccnt=0;
    for(i=0;i<n;i++)
        {
        if(s[i]=='A')
            acnt++;
        else if(s[i]=='T')
            tcnt++;
        else if(s[i]=='G')
            gcnt++;
        else if(s[i]=='C')
            ccnt++;
    }
    while(left<n && right<n && left<=right)
        {
            while(right<n && !(acnt<=n/4 && tcnt<=n/4 && gcnt<=n/4 && ccnt<=n/4))
                {
                      if(s[right]=='A')
                        acnt--;
                    else if(s[right]=='T')
                        tcnt--;
                    else if(s[right]=='G')
                        gcnt--;
                    else if(s[right]=='C')
                        ccnt--;
                        right++;
            	}
            if(acnt<=n/4 && tcnt<=n/4 && gcnt<=n/4 && ccnt<=n/4) temp=min(temp,right-left);
        	while(left<n && (acnt<=n/4 && tcnt<=n/4 && gcnt<=n/4 && ccnt<=n/4))
            {
                      if(s[left]=='A')
                        acnt++;
                    else if(s[left]=='T')
                        tcnt++;
                    else if(s[left]=='G')
                        gcnt++;
                    else if(s[left]=='C')
                        ccnt++;
                        left++;
            }
        
    }
    cout << temp;
    return 0;
}
