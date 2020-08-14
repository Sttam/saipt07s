/***********************************************************************************************
  Author     : Matts Date : 10 June 2020

  Purpose    : How string literals are dealt with by the compiler
***********************************************************************************************/
#include <iostream>

int main( int argc, char *argv[] ){
    
    if( sizeof( "Hello") == 5 ){

        std::cout << "We got it right" << std::endl;
    }

    char* p = "Plato"; // error, but accepted in pre-C++11-standard code
    p[4] = 'e';        // error : This will compile, why this will fail? why?
 
    char s[]{"Plato"}; // now modification is allowed
    return EXIT_SUCCESS;
}
