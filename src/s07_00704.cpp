/***********************************************************************************************
  Author     : Matts 10 June 2020

  Purpose    : rvalue 
***********************************************************************************************/
#include <iostream>
#include <vector>
#include <s07_00704.hpp>

using namespace std;
using namespace saip;


int main(){

    Map mymap1;
    mymap1[0] = 5; mymap1[1] = 10; mymap1[2] = 20; mymap1[9] = 990; 
    cout << mymap1;

    Map mymap2;
    mymap2[0] = 25; mymap2[1] = 50; mymap2[2] = 70; mymap2[9] = 111; 
    cout << mymap2;

    Swap( mymap1, mymap2 ); 
    cout << "Printing Map 1" << endl;
    cout << mymap1;
    cout << "Printing Map 2" << endl;
    cout << mymap2;

   return 0;
}
