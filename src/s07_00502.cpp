/***********************************************************************************************
  Author     : Matts Date : 23 June 2020

  Purpose    : Pointers and ownership
***********************************************************************************************/
#include <iostream>

using namespace std;

void confused(int* p);
int global {7};

int main( int argc, char *argv[] ){
    int *pn = new int{7}; //One integer
    int i {7};
    int *q = &i;
    int global {7};
    confused(pn);
    confused(q); // Creates problem
    confused(&global); //Creates problem
}

void confused(int* p){
     delete p;
}
