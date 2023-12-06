
#include<bits/stdc++.h>
using namespace std;
int n=10;
int a[10]={14,22,3,44,55,5,7,8,3,2101};
int dp[10], vis[10];

int f(int i)
{
    if(vis[i])
    {
        return dp[i];
    }
    if(i==n-1 && a[i]%2!=0)
    {
        return a[n-1];
    }
    if(a[i]%2!=0){

    dp[i]=f(i+1)+a[i];
    vis[i]=1;
    }
    else
    {
        dp[i]=f(i+1);
    }
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


