#include <iostream>
#include <iomanip>

using namespace std;
void printMatrix_3col(int matrix[][3], int N_ROWS, int N_COLUMNS);

int main() {
  
  const int N_ROWS = 10;
  const int N_COLS = 3;
  int AirQuality_Index[N_ROWS][N_COLS] = {
  {50, 68, 58}, {58, 115, 78}, {62, 110, 81}, {66, 124, 110}, {64, 152, 121}, {46, 143, 90}, {46, 143, 80},{25, 91, 91}, {27, 19, 59}, {17, 13, 27}
  };
 cout<<setw(2)<<"  Grand Junction"<<setw(6)<<"  Fort Collins"<<setw(12)<<"  Denver- Boulder"<<endl;
  
//  cout<<"My matrix;"<<endl;
  printMatrix_3col(AirQuality_Index, N_ROWS, N_COLS);
  
  
}
// function to print the matrix in a matrix with 3 columns
void printMatrix_3col(int matrix[][3], int N_ROWS, int N_COLUMNS)
{
    int row, col;
    for (row = 0; row < N_ROWS; row++)
    {
        for(col = 0; col < N_COLUMNS; col++)
            cout << setw(12) << matrix[row][col] << " ";
        
        cout << endl;    
    }
}