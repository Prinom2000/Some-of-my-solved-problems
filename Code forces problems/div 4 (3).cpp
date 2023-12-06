#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>> t;
    int c=0;
    for(int i=0; i<t; i++)
    {
        c=0;
        int r=0;
        char a[10][10];
        for(int p=0; p<10; p++)
        {
            for(int q=0; q<10; q++)
            {
                cin>>a[p][q];
                if(a[p][q]=='X')
                {
//                    if(p<q)
//                    {
//                        c=c+p+1;
//                    }
//                    else{
//                        c=c+q+1;
//                    }
//
//                        if(c<5)
//                        {
//                            r=r+c;
//
//                        }
//                        else
//                        {
//                            r=r+c-4;
//                        }

                        if(p==0 || p==9 || q==0 || q==9)
                        {

                            r=r+1;
                        }
                        if(p==1 || p==8 || q==1 || q==8)
                        {
                            if(p!=0 && p!=9 && q!=0 && q!=9)
                            r=r+2;
                        }
                        if(p==2 || p==7 || q==7 || q==2)
                        {
                            if(p!=0 && p!=9 && q!=0 && q!=9 && p!=1 && p!=8 && q!=1 && q!=8)
                            r=r+3;
                        }
                        if(p==3 || p==6 || q==3 || q==6)
                        {
                            if(p!=0 && p!=9 && q!=0 && q!=9 && p!=1 && p!=8 && q!=1 && q!=8 && p!=2 && p!=7 && q!=2 && q!=7)

                            r=r+4;
                        }
                        if(p==4 || p==5 || q==4 || q==5)
                        {
                            if(p!=0 && p!=9 && q!=0 && q!=9 && p!=1 && p!=8 && q!=1 && q!=8 && p!=2 && p!=7 && q!=2 && q!=7 && p!=3 && p!=6 && q!=3 && q!=6)
                            r=r+5;
                        }

                }
            }
        }

        cout<< r<< endl;


    }
}
