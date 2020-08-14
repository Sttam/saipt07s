/***********************************************************************************************
  Author     : Matts 10 June 2020

  Purpose    : rvalue from basics
***********************************************************************************************/
#include <iostream>

using namespace std;

string globalS{ "From globalS"};

//Returns an lvalue reference
string getReflvr() {
    return globalS;
}

string getRefrvr() {
    return "R-value-Ref";
}

void Print( string& s ){
   cout << "Printing from lvalue reference " << s << endl;
}

void Print( string&& s ){
   cout << "Printing from RVALUE reference " << s << endl;
}

int main(){
    string s{getReflvr()};

    //lvalue const ref
    const string& s_cr = getReflvr();
 
    //lvalue ref - Error will not allow an lvalue reference to 
    // to take an rvalue ref.

    //string& s_r = getRef();
    Print( s);
    Print( globalS);

    Print( getReflvr());
    Print( getRefrvr());

    return 0;
}
