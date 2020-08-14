/***********************************************************************************************
  Author     : Matts 10 June 2020

  Purpose    : rvalue 
***********************************************************************************************/
#include <iostream>
#include <vector>
#include <s07_00701.hpp>

using namespace std;
using namespace saip;


int main(){

    Map mymap;
   
    mymap[0] = 5; 
    mymap[1] = 10; 
    mymap[2] = 20; 
    mymap[9] = 990; 
    cout << mymap;

   return 0;
}
