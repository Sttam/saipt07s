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

int main(){

    /* 
         lvalue reference
         A reference which is permanent in nature for the scope of the variable.


    */
    string& lvr = globalS;

    //lvalue const ref - It is fine.
    const string& clvr = getReflvr();

    //Will not let a temp bind with lvr
    //string& s_lvr = getReflvr();

    //This is fine.
    string&& s_rvr = getReflvr();
 
    cout << globalS << endl;
    cout << s_clvr << endl;
    cout << s_rvr << endl;

    return 0;
}
