#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        if((n-1)%3==0 || (n+1)%3==0 )
        {
            cout<< "First\n";
        }
        else
        {
            cout << "Second\n";
        }


    }
}
