#include<iostream>
using namespace std;
int main() {
 int year[100], n, i;
 cout << "Enter the number of years: ";
 cin >> n;
 cout << "Enter " << n << " years: " << endl;
 for (i = 0; i < n; i++)
 cin >> year[i];

 cout << "Following are leap years: " << endl;

for (i = 0; i < n; i++) {
 if ((year[i] % 4 == 0 && year[i] % 100 != 0) || (year[i] % 400 == 0))
 cout << year[i] << endl;
 }
 cout << "Following are not leap years: " << endl;
 for (i = 0; i < n; i++) {
 if (!((year[i] % 4 == 0 && year[i] % 100 != 0) || (year[i] % 400 == 0)))
 cout << year[i] << endl;
 }
 return 0;
}

