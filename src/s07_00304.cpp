/***********************************************************************************************
  Author     : Matts Date : 10 June 2020

  Purpose    : 
               Raw string.
***********************************************************************************************/
#include <iostream>
const char* getErrorMsg();
using namespace std;

int main( int argc, char *argv[] ){

    const char* p = "Heraclitus";
    const char* q = "Heraclitus";

   //Compiler may store both the strings in one place
   // and return the same address to p & Q 
   if (p == q) cout << "one!\n";

    return  0;
}
