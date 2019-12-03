#include"quickSort.h"
#include<time.h>
#include<iostream>
#include<vector>
#include<list>
#include<iterator>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[]={5,1,9,4,6,2,0,3,8,7},i;
    srand((int)time(0));
    quickSort(a,a+10,less<int>());
    copy(a,a+10,ostream_iterator<int>(cout," "));
    cout<<endl;

    string b[]={"ChongQing","ShangHai","AoMen","TianJing","BeiJing","XiangGang"};
    vector<string> vb=vector<string>(b,b+6);
    quickSort(vb.begin(),vb.end(),greater<string>());
    copy(vb.begin(),vb.end(),ostream_iterator<string>(cout, " "));
    cout<<endl;

    double c[]={8.5,6.3,1.7,9.2,0.5,2.3,4.1,7.4,5.9,3.7};
    list<double> lc=list<double>(c,c+10);
    quickSort(lc.begin(),lc.end(),greater<double>());
    copy(lc.begin(),lc.end(),ostream_iterator<double>(cout," "));
    cout<<endl;
    return 0;
}
