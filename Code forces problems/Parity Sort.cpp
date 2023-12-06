#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>> n;
        int arr[n];
        int a1[n];
        for(int p=0; p<n; p++)
        {
            cin>>arr[p];
            a1[p]=arr[p];
        }

        sort(arr,arr+n);
        int r=0;
        for(int p=0; p<n; p++)
        {
            if(arr[p]%2==0 && a1[p]%2==0)
            {
               r++;
            }
            if(arr[p]%2!=0 && a1[p]%2!=0)
            {
               r++;
            }
        }

        if(r==n){
            cout<< "YES\n";
        }
        else cout<< "NO\n";
    }

}
