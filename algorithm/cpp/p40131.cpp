#include<iostream>
#include<string>
#include<vector>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int a[]={9,8,5,2,1,7,6,4,3,0};
    inplace_merge(a,a+5,a+10,greater<int>());
    copy(a,a+10,ostream_iterator<int>(cout, " "));
    cout<<endl;
    return 0;
}
