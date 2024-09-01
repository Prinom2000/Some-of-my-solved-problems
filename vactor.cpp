#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> v)
{
    for(int i=0; i<v.size(); i++){

        cout<< v[i]<< " ";
    }
    cout<< endl;
}

int main()
{
    int ele, s;
    cout<< "Size: ";
    cin>> s;
    vector<int> v1;
    for(int i=0; i<s; i++){
        cin>> ele;
        v1.push_back(ele);
    }

    display(v1);
    v1.pop_back();
    display(v1);
//    vector <int> :: iterator iter =v1.begin();
//    v1.insert(iter, 566);
    v1.insert(v1.begin()+1, 566);
    display(v1);
    v1.insert(v1.begin(),50, 566);
    display(v1);





}
