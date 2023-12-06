#include<bits/stdc++.h>
using namespace std;

string s;

int del_up(int i)
{
//    if(i==0)
//    {
//        return 0;
//    }

    if(isupper(s[i]))
        {

            s.erase(i,1);
            return i;
        }
        else
        del_up(i-1);


}

int del_low(int i)
{
//    if(i==0)
//    {
//        return 0;
//    }

    if(islower(s[i]))
        {

            s.erase(i,1);
            return i;
        }
        else
        del_low(i-1);


}

int main() {
    int t;
    cin>>t;
    for(int p=0; p<t; p++)
    {

        cin>> s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='B' && i==0)
            {
                s.erase(i,1);
                i--;
            }

            else if(s[i]=='B')
            {
                s.erase(i,1);
                del_up(i-1);
                i--;
                i--;
            }

            if(s[i]=='b' && i==0)
            {
                s.erase(i,1);
                i--;

            }

            else if(s[i]=='b')
            {
                s.erase(i,1);

                del_low(i-1);
                i--;
                i--;
            }


        }

        cout<< s<< endl;

    }

}
