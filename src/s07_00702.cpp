/***********************************************************************************************
  Author     : Matts 10 June 2020

  Purpose    : rvalue 
***********************************************************************************************/
#include <iostream>
#include <vector>

using namespace std;

int x = 11;  //lvalues that are variables.

//lvalues that are not variables
int  getValue(int i){  
   int y = i;
   return y;
}

//lvalues that are not variables
int&  getRef(){  
   return x;
}

int main(){

  int& lvr_i = x;
  const int& clvr_i = x;

  //icr = 20; error: assignment of read-only reference ‘icr’
  //This is important....... Did we change the reference?
  lvr_i = 22;

  cout << "Value of x : " << x << endl;
 
  lvr_i = getValue(__LINE__);
  cout << "Value of x with value : " << x << endl;

  //We could do a rvalue ref with getRef.
  int&& rvr_i = getValue(__LINE__);

  cout << "RValue Ref value : " << rvr_i << endl;

  rvr_i = 100;
  cout << "RValue Ref value : " << rvr_i << endl;

   return 0;
}

