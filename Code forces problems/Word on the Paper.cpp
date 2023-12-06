#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    for(int i=0; i<t; i++)
    {
        char c[8][8];
        for(int p=0; p<8; p++)
        {
            for(int q=0; q<8; q++)
            {
                cin>>c[p][q];
            }
        }
        for(int p=0; p<8; p++)
        {
            for(int q=0; q<8; q++)
            {
                if(c[p][q]!=46)
                {
                    cout<<c[p][q];
                }
            }
        }
        cout<< endl;

    }
}
