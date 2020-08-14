/***********************************************************************************************
  Author     : Matts Date : 10 June 2020

  Purpose    : Array Initializer 
                
***********************************************************************************************/
#include <iostream>

constexpr int buf_size {100};
constexpr int ARRAYSIZE{20};

void FillArray( int *p, int count );


int main( int argc, char *argv[] ){
     char s[] { "Hello World"};
     auto s1{s};


     int intArray[ ARRAYSIZE ];
     int *pi = new int[ARRAYSIZE ];

     FillArray( intArray, ARRAYSIZE  );
     FillArray( pi, ARRAYSIZE  );
     delete [] pi;
     return EXIT_SUCCESS;
}

void FillArray( int *p, int count ){
    int i{0};
    while( i < count) *p = i *20;
}
