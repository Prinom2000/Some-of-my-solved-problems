#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    for(int i=0; i<t; i++)
    {
        int n,k;
        cin>> n>> k;
        int arr[n];
        for(int j=0; j<n; j++)
        {
            cin>> arr[j];
        }
        sort(arr, arr+n);
        if(n==1)
        {
            cout<< "0\n";
        }
        else{
        int r=0;
        for(int j=0; j<n-1; j++)
        {
            int diff = std::abs(arr[j]-arr[j+1]);
            if(diff>k)
            {
                r++;
            }
        }
        cout<< r+1<<"\n";
        }
    }

}
