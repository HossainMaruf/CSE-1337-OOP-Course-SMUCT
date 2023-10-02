#include <iostream>
#include <math.h>

using namespace std;

int main() {
  // except first dimension, we must specify all other
  int sqr_matrix[][4] = {
    {1, 3, -4, 5},
    {-7, 0, 9, 2},
    {-1, 4, 1, 2},
    {2, 4, 1, -5}
  };

  int row = sqrt(sizeof(sqr_matrix) / sizeof(int));
  int col = row;

  int primary_sum = 0, secondary_sum = 0;

  for(int i=0; i < row; i++) {
    for(int j=0; j < col; j++) {
      if(i == j) {
        primary_sum += sqr_matrix[i][j];
      }
      if((i+j) == (row - 1)) {
        secondary_sum += sqr_matrix[i][j];
      }
    }
  }

  cout << "Primary Diagonal Sum: " << primary_sum << endl;
  cout << "Secondary Diagonal Sum: " << secondary_sum << endl;

  return 0;
}