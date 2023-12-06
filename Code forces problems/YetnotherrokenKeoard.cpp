#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        string s;
        cin>> s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='B')
            {
                s.erase(i,1);
                for(int j=i-1;j>-1; j--)
                {
                    if(isupper(s[j]))
                    {

                        s.erase(j,1);

                        i--;
                        break;
                    }

                }
                i--;

            }

            else if(s[i]=='b')
            {
                s.erase(i,1);
                for(int j=i-1;j>-1; j--)
                {
                    if(islower(s[j]))
                    {

                        s.erase(j,1);

                        i--;
                        break;
                    }

                }
                i--;

            }

        }

        cout<< s<< endl;

    }
}

