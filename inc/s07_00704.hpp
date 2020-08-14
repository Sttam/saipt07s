#ifndef  __S07_00704__HPP       
#define  __S07_00704__HPP       
#include <iostream>
#include <vector>
#include <utility>

using namespace std;
namespace saip{

constexpr  int maxsize{10};

class Map { 
public:
    int& operator[](const int v){ return _p[v];} // return the value corresponding to the key
    int* begin() const{ return _p; }
    int* end() const{ return _p + maxsize;}

    Map() :_p{ new int[maxsize]}{ for(int i=0; i < maxsize; i++) _p[i] = 0;} 
   //Move operation
    Map(Map&& m): _p{m._p}{ m._p = nullptr; cout << "Move Constructor\n"; };
    Map(const Map& m):_p{ new int[maxsize]}{
        for( int i=0; i < maxsize; i++) 
            _p[i] = m._p[i]; 
    }
    //Move Assignement;
    Map& operator =(Map &&m){ delete[]_p; _p = m._p; m._p = nullptr; cout << "Move Assignment\n"; return *this;}
    Map& operator =(const Map &m) { 
        for( int i=0; i < maxsize; i++) 
            _p[i] = m._p[i]; 
        return *this;
    }
    ~Map(){ delete []_p;}
    friend ostream& operator<<(ostream& os, const Map&);

private:
    int *_p;
};

ostream& operator<< (ostream& os, const Map& m){
    int i = 0;
    for( const auto& x : m )
        os <<  i++ << " : " << x  << " " ;
    os << endl;
    return os;
}
template<class T>
void Swap(T& a, T& b) // "perfect swap" (almost)
{
    T tmp {move(a)}; // the initialization may write to a
    a = move(b);     // the assignment may write to b
    b = move(tmp);   // the assignment may write to tmp
}

}//namespace
#endif //__S07_00704
