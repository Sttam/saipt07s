/***********************************************************************************************
  Author     : Matts 10 June 2020

  Purpose    : rvalue 
***********************************************************************************************/
#include <iostream>
#include <vector>

using namespace std;
template<class T>
void Swap(T& a, T& b) 
{
    T tmp {a};     // now we have two copies of a
    a = b;         // now we have two copies of b
    b = tmp;       // now we have two copies of tmp (aka a)
}

void Print( const vector<int>& v ){
    for (const auto& x : v)
         cout << x << '\n';
}
int main(){

    vector<int> v1{100,200,300};
    vector<int> v2{101,202,303};
   
    Swap( v1, v2 );
    Print( v1 );

   return 0;
}
