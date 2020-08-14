/***********************************************************************************************
  Author     : Matts Date : 23 June 2020

  Purpose    : Pointers and const 
***********************************************************************************************/
#include <iostream>

using namespace std;

const int model = 90; // model is a const
const int v[] = { 1, 2, 3, 4 }; // v[i] is a const
//const int x; // error : no initializer

int main( int argc, char *argv[] ){

  // model = 200; // error
  // v[2] = 3; // error

  char p[] { "Another string" };

   char s[] = "Gorm";
   const char* pc = s; // pointer to constant

   //pc[3] = 'g'; // error : pc points to constant
   pc = p; // OK


   char *const cp = s; // constant pointer
   cp[3] = 'a';        // OK
   //cp = p;           // error : cp is constant

   const char *const cpc = s; // const pointer to const
   //cpc[3] = 'a'; // error : cpc points to constant
   //cpc = p; // error : cpc is constant 


}
