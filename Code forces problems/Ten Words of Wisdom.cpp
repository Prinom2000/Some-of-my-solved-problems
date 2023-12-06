//#include<iostream>
//#include<bits/stdc++.h>
//using namespace std;
//int main()
//{
//    int t;
//    cin>> t;
//    for(int i=0; i<t; i++)
//    {
//        int n,r1=0,r2=0;
//        cin>>n;
//
//        for(int i=0; i<n; i++)
//        {
//            int w,q;
//            cin>> w>> q;
//            if(w<=10 && q>r2)
//            {
//                r2=q;
//                r1=i+1;
//            }
//
//        }
//        cout<< r1<< endl;
//
//    }
//
//}





#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr [3]={2,4 ,6};
    for(int p=0; p<3; p++)
        {
            cout<<arr[p];
        }
    swap(arr[1],arr[2]);
    for(int p=0; p<3; p++)
        {
            cout<<arr[p];
        }
}
