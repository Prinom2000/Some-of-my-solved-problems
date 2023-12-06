#include<bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
	int i, j;
	bool swapped;
	for (i = 0; i < n - 1; i++) {
		swapped = false;
		for (j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		if (swapped == false)
			break;
	}
}

int main()
{
    int t;
    cin>> t;
    for(int i=0; i<t; i++)
    {
        int n;
        cin>>n;
        int a[n];
        for(int p=0; p<n; p++)
        {
            cin>>a[p];
        }

        bubbleSort(a,n);
//
//        for(int p=0; p<n; p++)
//        {
//            cout<<a[p];
//        }

        a[0]=a[0]+1;
        int x=1;
        for(int p=0; p<n; p++)
        {
            x=x*a[p];
        }
        cout<< x<<endl;

    }


}
