// The MIT License (MIT)

// Copyright (c) 2019 Field Ruan

//  Permission is hereby granted, free of charge, to any person obtaining a
//  copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation
//  the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//  DEALINGS IN THE SOFTWARE.

/* code */

#ifndef _INSERTIONSORT_H
#define _INSERTIONSORT_H
#include <iterator>
#include <algorithm>
using namespace std;

/*
template <typename Iterator>
void insertionSort(const Iterator &a, const Iterator &b)
{
    typedef typename iterator_traits<Iterator>::value_type T;
    int i, j, n = distance(a, b);
    T key;
    Iterator p, q, t;
    for (j = 1, q = p = a, p++, t = p; j < n; j++, q = p, p++, t = p)
    {
        key = *p; //key设置值为a[j]
        i = j - 1;
        while ((i >= 0) && (*q > key))
        {
            *t = *q;       //a[i+1]设置值为a[i]
            i--, t--, q--; //i<--i-1
        }
        *t = key; //a[i+1]<--key
    }
}
*/

/*
//利用STL的rotate函数的改进版本
//仔细考察算法INSERTION-SORT(A)，其内嵌所做的while循环所做的工作是有序子序列A[1...j-1]中
//从右向左找到第一个不超过A[j]的元素位置i，然后将A[j]插入到位置i处。这相当于将A[i+1...j-1]
//向后移一个位置，然后将A[j]复制到位置i处。这个操作可以调用C++的STL中的旋转算法模板函数来完成，
//该函数的用户接口为: rotate(first,middle,last)
//其功能为将[first, last)中的[middle, last]前移，而将[first, middle)后移。

template <typename Iterator>
void insertionSort(const Iterator &a, const Iterator &b){
    int i, j, n = distance(a,b);
    Iterator p,q,t;
    for(j=1, q=p=a, p++, t=p; j<n;j++,q=p,p++) { //p跟踪a[j]
        i=j-1;
        while((i>=0)&&(*q>*p))
            q--,i--;    //q跟踪a[i]
        q++;   //q指向a[i+1]
        t++;   //t跟踪a[j+1]
        rotate(q,p,t);
    }
}

//由于程序中要调用rotate函数，所以在第3行要把定义该函数的头文件algorithm包含进来。
//由于在while循环中不再改写元素的值，所以不必将*p（也就是A[j])保存在临时变量key中，
//删掉key也就没有必要再提示迭代器所指向的元素类型了。
*/

template<typename Iterator, typename Comparator>
void insertionSort(const Iterator &a, const Iterator &b){
    int i,j,n=distance(a,b);
    Iterator p,q,t;
    for(j=1,q=p=a,p++,t=p;j<n;j++,q=p,p++){ //p跟踪a[j]
        i=j-1;
        while((i>=0)&&Comparator()(*q,*p))
            q--,i--;
        q++;   //q跟踪a[i+1]
        t++;   //t跟踪a[j+1]
        rotate(q,p,t);
    }
}

/*
模板参数Comparator，它是一个用来表示线性表中元素比较规则的特殊类——仿函数function是定义了操作
符()的类：
template<typename T>
class function{
    public:
    bool operator()(T x, T y);
}


传递的第二个模板参数Comparaor分别是 greater<int>、less<string>和less<double>
greater是STL预定义仿函数模板：
template<typename T>
class greater{
    public:
    bool operator()(T x, T y);
}

template<typename T>
class greater{
    public:
    bool less()(T x, T y);
}
*/



#endif