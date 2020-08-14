/***********************************************************************************************
  Author     : Matts Date : 21 June 2020

  Purpose    : Pointers to Array
***********************************************************************************************/
#include <iostream>

int main( int argc, char *argv[] ){

    int v[] = { 1, 2, 3, 4 };

    int* p1 = v; // pointer to initial element (implicit conversion)
    int* p2 = &v[0]; // pointer to initial element
    int* p3 = v+4; // pointer to one-beyond-last element

    return EXIT_SUCCESS;
}
