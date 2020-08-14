#ifndef  __S07_00603__HPP       
#define  __S07_00603__HPP       
#include <iostream>
#include <vector>
#include <utility>

using namespace std;
namespace saip{

class Map;
ostream& operator<<(ostream&, const Map&);

template<class T>
void Swap(T& a, T& b) // "perfect swap" (almost)
{
    T tmp {move<T&&>(a)}; // the initialization may write to a
    a = move<T&&>(b);     // the assignment may write to b
    b = move<T&&>(tmp);   // the assignment may write to tmp
}
template<class T> void Swap(T&& a, T& b);
template<class T> void Swap(T& a, T&& b);

constexpr  int maxsize{10};

class Map { 
public:
    int& operator[](const int v){ return _p[v];} // return the value corresponding to the key
    int* begin() const{ return _p; }
    int* end() const{ return _p + maxsize;}

    Map() :_p{ new int[maxsize]}{ for(int i=0; i < maxsize; i++) _p[i] = 0;} 
    Map(const Map& m):_p{ new int[maxsize]}{
        for( int i=0; i < maxsize; i++) 
            _p[i] = m._p[i]; 
    }
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

}//namespace
#endif //__S07_00603__HPP
