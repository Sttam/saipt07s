/***********************************************************************************************

  Author     : Matts Date : 10 June 2020

  Purpose    : void pointers
                
***********************************************************************************************/

#include <iostream>

int main( int argc, char *argv[] ){

    int count{100};
    //void x{100}; // This declaration will create a problem

    int* ip{&count};
    void* pv{ip}; // ok: implicit conversion of int* to void*

    //*pv;           //error : can’t dereference void*
    //++pv;          //error : can’t increment void* (the size of the object pointed to is unknown)

    int* pi2 = static_cast<int*>(pv); //explicit conversion back to int*
                                      //Safe, pv was an integer pointer.

    //double* pd1 = pv; // error
    //double* pd2 = pi; // error
    double* pd3 = static_cast<double*>(pv); // Unsafe casting

    int* pi3 = nullptr;
    double* pd = nullptr;
    //int i = nullptr; // error : i is not a pointer

     return EXIT_SUCCESS;
}
