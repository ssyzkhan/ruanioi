#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<iterator>
using namespace std;
#include"merge.h"
int main(int argc, char const *argv[])
{
    int a[]={1,2,5,8,9,0,3,4,6,7},i;
    merge(a,a+5,a+10);
    copy(a,a+10,ostream_iterator<int>(cout," "));
    cout<<endl;

    string b[]={"AoMen","BeiJing","ShangHai","ChongQing","TianJin","XiangGang"};
    vector<string> vb = vector<string>(b,b+6);
    merge(vb.begin(),vb.begin()+3,vb.end());
    copy(vb.begin(),vb.end(),ostream_iterator<string>(cout," "));
    cout<<endl;

    double c[]={0.5,3.7,6.3,8.5,9.2,1.7,2.3,4.1,5.9,7.4};
    list<double> lc = list<double>(c,c+10);
    list<double>::iterator m=lc.begin();
    advance(m,5);
    merge<list<double>::iterator,greater<double>>(lc.begin(),m,lc.end());
    copy(lc.begin(),lc.end(),ostream_iterator<double>(cout," "));
    cout<<endl;
    return 0;
}
