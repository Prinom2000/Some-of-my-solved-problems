#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5]={3,1,66,1,4};
    cout<< find(arr, arr+5, 1)-arr<< endl;
    cout<< sizeof(arr)/sizeof(arr[0]);
}
