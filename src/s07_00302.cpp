/***********************************************************************************************
  Author     : Matts Date : 10 June 2020

  Purpose    : Array Initializer 
***********************************************************************************************/
#include <iostream>
void print( int *p, int count );

constexpr int buf_size {20};

int main( int argc, char *argv[] ){
     char s[buf_size] { "Hello World"};

     auto s1 = {'H', 'e', 'l', 'l', 'o',' ', 'W','o','r', 'l','d'};

     int  i1Array[]{20,30,40}; // 3 elements
     int  i2Array[10];       //unintialized array
     int  i3Array[10]{};     // All elements will be set to 0;
     int  i4Array[10]{20,30,40}; // Remaining 7 elements will be set to 0;

     print( i1Array, sizeof(i1Array)/sizeof(int));
     print( i2Array, sizeof(i2Array)/sizeof(int));
     print( i3Array, sizeof(i3Array)/sizeof(int));
     print( i4Array, sizeof(i4Array)/sizeof(int));

     return EXIT_SUCCESS;
}
void print( int *p, int count ){
    for( int i{0}; i < count; i++){
        if( count > 2 && i )
           std::cout << ", ";
        std::cout <<  p[i];
    }
    std::cout << std::endl;
}
