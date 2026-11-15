#include <iostream>
using namespace std;

int main() {
int matrix[20][20];
int sparse[401][3];
int rows, cols;
int count = 0;
 cout << "Enter number of rows: ";
  cin >> rows;
cout << "Enter number of columns: ";
   cin >> cols;
cout << "Enter matrix elements:" << endl;

for (int i = 0; i < rows; i++) {
for (int j = 0; j < cols; j++) {
  cin >> matrix[i][j];
 if (matrix[i][j] != 0) {
count++;
sparse[count][0] = i;
 sparse[count][1] = j;
sparse[count][2] = matrix[i][j];
}
}
}
sparse[0][0] = rows;
sparse[0][1] = cols;
sparse[0][2] = count;
cout << "\nSparse Matrix Representation:\n";
cout << "Row Column Value\n";
 for (int i = 0; i <= count; i++) {
for (int j = 0; j < 3; j++) {
cout << sparse[i][j] << "     ";
   }
cout << endl;
 }
return 0;
}
