#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>> n;
    string s;
    cin>> s;
    int u=0,d=0,l=0,r=0;
    int t=0;
    for(int i=0; i<n; i++)

    {
        if(s[i]=='L')
        {
            l++;
        }
        else if(s[i]=='U')
        {
            u++;
        }else if(s[i]=='D')
        {
            d++;
        }else if(s[i]=='R')
        {
            r++;
        }
    }
    if(l<r)
    {
        t=t+l*2;
    }
    else{
        t=t+r*2;
    }
    if(u<d)
    {
        t=t+u*2;
    }
    else{
        t=t+d*2;
    }
    cout<< t;

}

