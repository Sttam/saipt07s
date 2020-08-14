/***********************************************************************************************
  Author     : Matts 10 June 2020

  Purpose    : rvalue 
***********************************************************************************************/
#include <s07_00603.hpp>
#include <sstream>

using namespace std;
using namespace saip;

int main(){
    stringstream ss{  "One Two Two Three Three Three "
               "Four Four Four Four"};

    Map<string,int> buf;
    for( string s;ss >> s; )
        ++buf[s]; //(lvalue reference)++

    cout << buf;
    Map<string,int> buf1;
    cout << buf;
    return 0;
}
