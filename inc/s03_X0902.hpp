#ifndef  __S03_00902__HPP       
#define  __S03_00902__HPP       
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

namespace saip{

template<typename T>
class Proxy { // Proxy refers to the object with which it is initialized
    T& m;
    public:
    Proxy(T& mm) :m{mm} {}
    Proxy& operator<<( char s[] );
};

template<typename T> 
Proxy<T>& Proxy<T>::operator<<( char s[] ){
        m << s;
        return *this;
};

template<typename T> 
class Handle { // Handle refers to its current object
    T* m;
    public:
        Handle(T* mm) :m{mm} {}
        void rebind(T* mm) { m = mm; }
        // ...
};


}//namespace saip
#endif //__S03_00901__HPP
