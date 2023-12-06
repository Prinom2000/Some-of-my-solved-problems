
#include<bits/stdc++.h>
using namespace std;

int a[10]={14,22,3,44,55,26,47,68,93,210};
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

    dp[i]=min(f(i-1),a[i]);
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

