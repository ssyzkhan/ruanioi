#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<algorithm>
#include<functional>
#include<iterator>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[]={1,2,5,8,9,0,3,4,6,7},i;
    i=distance(a,stable_partition(a,a+10,bind2nd(greater_equal<int>(),a[9])));
    copy(a,a+10,ostream_iterator<int>(cout," "));
    cout<<endl<<i<<endl;

    string b[]={"AoMen","BeiJing","ChongQing","TianJin","XiangGang","ShangHai"};
    vector<string> vb=vector<string>(b,b+6);
    i=distance(vb.begin(),stable_partition(vb.begin(),vb.end(),bind2nd(less_equal<string>(),*--vb.end())));
    copy(vb.begin(),vb.end(),ostream_iterator<string>(cout," "));
    cout<<endl<<i<<endl;

    double c[]={0.5,3.7,6.3,8.5,9.2,1.7,2.3,4.1,5.9,7.4};
    list<double> lc=list<double>(c,c+10);
    i=distance(lc.begin(),stable_partition(lc.begin(),lc.end(),bind2nd(greater_equal<double>(),*--lc.end())));;
    copy(lc.begin(),lc.end(),ostream_iterator<double>(cout," "));
    cout<<endl<<i<<endl;
    return 0;
}
