#include<bits/stdc++.h>
using namespace std;

int a[10]={1,2,3,4,5,6,7,8,9,10};
int dp[10], vis[10];

int f(int i)
{
    if(vis[i])
    {
        return dp[i];
    }
    if(i==0)
    {
        return a[i];
    }

    dp[i]=f(i-1)+a[i];
    vis[i]=1;
    return dp[i];


}




int main() {
    int q;
    cin>> q;
    while(q--)
    {
        int i;
        cin>> i;
        cout<< f(i)<< endl;
    }

}

