
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string s;
        cin>> s;

        char c1=s[0], c2=s[1];
//        cout<< c1;
        for(char c='a';c<'i';c++)
        {
            if(c!=c1)
            {
                cout<< c<<c2<< endl;
            }
        }
        int p=c2-'0';
        for(int i=1;i<9; i++)
        {
            if(i!=p)
            {
                cout<< c1<<i<< endl;
            }
        }
    }
}
