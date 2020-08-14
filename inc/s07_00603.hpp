#ifndef  __S07_00603__HPP       
#define  __S07_00603__HPP       
#include <iostream>
#include <vector>
#include <utility>

using namespace std;
namespace saip{

template<class T>
void Swap(T& a, T& b) // "perfect swap" (almost)
{
    T tmp {move<T&&>(a)}; // the initialization may write to a
    a = move<T&&>(b);     // the assignment may write to b
    b = move<T&&>(tmp);   // the assignment may write to tmp
}

template<class K, class V> class Map;
template<class K, class V> 
ostream& operator<<(ostream&, const Map<K,V>&);


template<class K, class V>
class Map { 
public:
    V& operator[](const K& v); // return the value corresponding to the key
    pair<K,V>* begin() { return &elem[0]; }
    pair<K,V>* end() { return &elem[0]+elem.size(); }
    friend ostream& operator<< <>(ostream& os, const Map<K,V>&);

private:
    vector<pair<K,V>> elem; // {key,value} pairs
};

template<class K, class V>
V& Map<K,V>::operator[](const K& k)
{
    for (auto& x : elem)
       if (k == x.first)
           return x.second;

    elem.push_back({k,V{}});   // add pair at end 
    return elem.back().second; // return the (default) value of the new element
}

template<class K, class V>
ostream& operator<< (ostream& os, const Map<K,V>& m){
    for (const auto& x : m.elem)
        os << x.first << ": " << x.second << '\n';
    return os;
}

}//namespace
#endif //__S07_00603__HPP
