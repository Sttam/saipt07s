/***********************************************************************************************
  Author     : Matts 10 June 2020
  
  Session 07 : Pointers

  Purpose    : Display essential pointer manipulation in C++
               The program copies a C- Style string
***********************************************************************************************/
#include <iostream>
using namespace std;

constexpr  int  buf_size{200};
char *lstrcpy( char* dest, char* src );

int main( int argc, char **argv ){

     char  s[] = "Hello how are you";
     char  buf[buf_size];

     cout << "size of  s[] " << sizeof( s ) << endl;
     lstrcpy( buf, s );
     
     cout << buf << endl;

     int x{10};
     int *pi{&x};
     
     return EXIT_SUCCESS;
}

/*
    What makes the while loop ends;
    C++ we don't use c-style strings
    Instead std::string should be used.

*/

char *lstrcpy( char* dest, char* src ){
      char *p = dest;

      while( *p++ = *src++ );
      return(dest); 
}
