/***********************************************************************************************
  Author     : Matts 10 June 2020

  Purpose    : rvalue 
***********************************************************************************************/
#include <iostream>

using namespace std;

string globals{"I am Global"};

//lvalues that are not variables
string  getString(){  
 
   return "I am from GetString";
}

void Myprint( string& s ){
  cout << "Normal Print " << s << endl;
}
void Myprint( string&& s ){
  cout << "Rvalue Print " << s << endl;
}

int main(){

   Myprint( globals );
   Myprint( getString() );


   return 0;
}

