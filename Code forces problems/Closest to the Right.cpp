#include<bits/stdc++.h>
using namespace std;

int bi(int a[], int n, int x)
{
    int l=0, h=n-1;
    while(l<=h)
    {
        int m=(l+h)/2;

        if(a[m]==x)
        {
            return m+1;
        }
        else
            if(x<a[m])
            {
                h=m-1;
            }
            else l=m+1;
    }

    return l+1;

}


int main()
{
    int n,k;
    cin >> n>>k;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>> a[i];
    }
    for(int i=0; i<k; i++)
    {
        int p;
        cin >> p;
        cout<<bi(a,n,p)<<endl;

    }



}

