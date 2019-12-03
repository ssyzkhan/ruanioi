#include<vector>
#include"heapSort.h"
#include<iterator>
#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[]={5,1,9,4,6,2,0,3,8,7};
    heapSort(a,a+10,less<int>());
    copy(a,a+10,ostream_iterator<int>(cout, " "));
    cout<<endl;

    string b[]={"ChongQing","ShangHai","AoMen","TianJin","BeiJing","XiangGang"};
    vector<string> vb=vector<string>(b,b+6);
    heapSort(vb.begin(),vb.end(),greater<string>());
    copy(vb.begin(),vb.end(),ostream_iterator<string>(cout," "));
    cout<<endl;

    return 0;
}
