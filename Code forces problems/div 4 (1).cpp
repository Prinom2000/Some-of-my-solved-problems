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
        string s;
        cin>> s;

            if(s[0]=='a' &&s[1]=='b' &&s[2]=='c')
        {
            cout<< "YES\n";
            c++;
        }
        else{
            swap(s[0],s[1]);
            if(s[0]=='a' &&s[1]=='b' &&s[2]=='c')
        {
            cout<< "YES\n";
            c++;

        }
        else{
            swap(s[0],s[1]);
        }


           swap(s[1],s[2]);
            if(s[0]=='a' &&s[1]=='b' &&s[2]=='c')
        {
            cout<< "YES\n";
                        c++;

        }
        else{
            swap(s[1],s[2]);
        }


        swap(s[0],s[2]);
            if(s[0]=='a' &&s[1]=='b' &&s[2]=='c')
        {
            cout<< "YES\n";
                        c++;
        }
        else{
            swap(s[0],s[2]);
        }


        }




        if(c==0)
    {
        cout<< "NO\n";
    }

    }


}
