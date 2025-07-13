#include <iostream>
using namespace std;
int main() {
int row;
    row = 1;
    while (row <= 5)
    {
        int col;
        col = 1;
        while (col <= row)
        {

            cout<<(" * ");
            col++;
        }
        cout<<("\n");
        
        row++;
    }
  }



