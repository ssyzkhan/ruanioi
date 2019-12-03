#ifndef _GETTHEINVERSION_H
#define _GETTHEINVERSION_H
#include <iterator>
using namespace std;
template <typename Iterator>
int getTheInversion(const Iterator &a, const Iterator &b){
    typedef typename iterator_traits<Iterator>::value_type T;
    int i,j,n=distance(a,b),count;
    T key;
    Iterator p,q,t;
    for(j=1,q=p=a,p++,t=p;j<n;j++,q=p,p++,t=p){
        key=*p;
        i=j-1;
        while((i>=0)&&(*q>key)){
            *t=*q;
            i--,t--,q--;
            count++;
        }
        *t=key;
    }
    return count;
}

#endif