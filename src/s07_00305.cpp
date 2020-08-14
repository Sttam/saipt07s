/***********************************************************************************************
  Author     : Matts Date : 10 June 2020

  Purpose    : Raw string.
***********************************************************************************************/
#include <iostream>
const char* getErrorMsg();
using namespace std;

constexpr int buf_size{100};

int main( int argc, char *argv[] ){

     char s[buf_size] { "Hello World"};

     string rs{R"(\w\\w)"};

     cout << "Raw String literal " << rs <<  std::endl;
     cout << "Raw String literal " << R"("quoted string")" <<  std::endl;
     char rs2[]{R"***((quoted string containing the usual terminator ("))")***"};
     std::cout << "Raw String literal " <<  rs2 <<  std::endl;

     return EXIT_SUCCESS;
}
