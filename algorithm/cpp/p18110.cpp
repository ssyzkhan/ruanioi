#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<iterator>
using namespace std;
#include"insertionSort.h"
/*
利用C++的抽象利器模板和线性表容器的迭代器，我们把对几乎所有的线性表（数组、向量、链表）
的插入排序算法用一段代码加以完全概括
*/
int main(int argc, char const *argv[])
{
    int a[]={5,1,9,4,6,2,0,3,8,7},i;
    insertionSort<int *, greater<int>>(a,a+10);  //注意一般调用模板函数时，不仅需要给函数传递参数还需要对
                                    //不用类型的序列传递合适的模板参数
    copy(a,a+10,ostream_iterator<int>(cout," "));
    /*
    这里采用了STL提供的模板函数copy，该函数的用户接口为：
    copy(first,last,result);
    它的第一和第二参数指明了要复制的源数据范围[first, last]，第三个参数指明了复制的结果数据入口。
    是将向量对象vb从头到尾(first为vb.begin(), last为vb.end())，以字符串格式复制到标准输出流cout,
    数据单元之间用空格隔开（result为ostream_iterator<string>(cout," ")).
    事实上，也可以用C风格来实现这一目标：
    for(int i=0;i<a.size();i++)
        cout<<vb[i]<<" ";
    */
    cout<<endl;

    string b[]={"ChongQing","ShangHai","AoMen","TianJin","Beijing","xiangGang"};
    vector<string> vb=vector<string>(b,b+6); //用数组b[0...5]创建vector对象vb
    insertionSort<vector<string>::iterator, less<string>>(vb.begin(),vb.end());  //然而，由于定义模板只有一个模板参数，所以系统在其
                                         //函数中也能准确获取这一信息，这样可以省略传递模板参数
    copy(vb.begin(),vb.end(),ostream_iterator<string>(cout," "));
    cout<<endl;

    double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
    list<double> lc=list<double>(c,c+10); //用数组c[0...9]创建list对象lc
    /*
    传递给函数的参数是lc.begin()和lc.end()。begin()和end()函数返回窗口的两个特殊迭代器：
    第一个元素位置和末尾元素后的位置（不是末尾元素）。由此可见，迭代器确实是数组指针的扩展
    */
    insertionSort<list<double>::iterator,less<double>>(lc.begin(),lc.end());   
    copy(lc.begin(),lc.end(),ostream_iterator<double>(cout<<" "));

    cout<<endl;
    return 0;
}
