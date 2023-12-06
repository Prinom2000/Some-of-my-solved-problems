#include <iostream>
using namespace std;
int main() {
 int r1, c1, r2, c2, m1[10][10], m2[10][10], product[10][10];
 cout << "Enter the number of rows and columns for the first matrix: \n";
 cin >> r1 >> c1;
 cout << "Enter the number of rows and columns for the second matrix: \n";
 cin >> r2 >> c2;
 if (c1 != r2) {
 cout << "Matrix multiplication is not possible. The number of columns in the first matrix must be equal to the number of rows in the secondmatrix." << endl;
 }
 cout << "Enter the elements of the first matrix:" << endl;
 for (int i = 0; i < r1; i++) {
 for (int j = 0; j < c1; j++) {
 cin >> m1[i][j];
 }
 }
 cout << "Enter the elements of the second matrix:" << endl;
 for (int i = 0; i < r2; i++) {
 for (int j = 0; j < c2; j++) {
 cin >> m2[i][j];
 }
 }
 for (int i = 0; i < r1; i++) {
 for (int j = 0; j < c2; j++) {
 product[i][j] = 0;
 }
 }
 for (int i = 0; i < r1; i++) {
 for (int j = 0; j < c2; j++) {
 for (int k = 0; k < c1; k++) {
 product[i][j] += m1[i][k] * m2[k][j];
 }
 }
 }
 cout << "Product of the two matrices:" << endl;
 for (int i = 0; i < r1; i++) {
 for (int j = 0; j < c2; j++) {
 cout << product[i][j] << " ";
 }
 cout << endl;
 }
 return 0;

}
