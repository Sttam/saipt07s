/***********************************************************************************************
  Author     : Matts Date : 21 June 2020

  Purpose    : Array 
     Navigating mutlidimensional array

***********************************************************************************************/
#include <iostream>

void print_m35(int m[3][5]);
void print_mi5(int m[][5], int dim1);
void print_mij(int *pm, int dim1, int dim2);

using namespace std;

int main( int argc, char *argv[] ){

   int arr[3][5]{ {0,1,2,3, 4},{5, 6,7,8,9},{10,11,12,13,14}};

    print_m35( &arr[0] );
    print_mi5( &arr[0], 3);
    print_mij( &arr[0][0], 3, 5 );
    return EXIT_SUCCESS;
}
/*
print_m35(int m[3][5]) has given the compiler how 
the address of the array is calculated.

What is passed to the function is an integer pointer.

*/

void print_m35(int m[3][5]){
    for (int i = 0; i!=3; i++) {
        for (int j = 0; j!=5; j++)
            cout << m[i][j] << '\t';
        cout << "\n";
    }
    cout << "\n\n\n";
}

void print_mi5(int m[][5], int dim1)
{
   for (int i = 0; i!= dim1; i++) {
      for (int j = 0; j!=5; j++)
         cout << m[i][j] << '\t';
      cout << '\n';
   }
   cout << "\n\n\n";
}

void print_mij(int* pm, int dim1, int dim2) 
{

    for (int i = 0; i!=dim1; i++) {
         for (int j = 0; j!=dim2; j++)
             cout << pm[i*dim2+j] << '\t'; // obscure
         cout << '\n';
    }
   cout << "\n";

}

void print_miu(int m[][5], int dim1)
{
   for (int i = 0; i!= dim1; i++) {
      for (int j = 0; j!=5; j++)
         cout << m[i][j] << '\t';
      cout << '\n';
   }
   cout << "\n\n\n";
}
