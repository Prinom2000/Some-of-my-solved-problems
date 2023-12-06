#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    for(int i=0; i<t; i++)
    {
        int n,m,k,h;
        int r=0;
        cin>>n>>m>>k>>h;
        int arr[n];
        for(int j=0; j<n; j++)
        {
            cin>> arr[j];
        }
        m--;
        int temp[m];

        for(int j=0; j<m; j++)
        {
            temp[j]=(j+1)*k;
//            cout<< temp[j];
        }



        for(int j=0; j<n; j++)
        {
            int diff = std::abs(h-arr[j]);
            int t=find(temp, temp+m, diff)-temp;
            if(t!=m)
            {
                r++;
            }
        }
        cout<<r<< endl;
    }

}
