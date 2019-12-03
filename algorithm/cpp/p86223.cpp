#include<iostream>
#include<iterator>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    int h[]={4,1,3,2,16,9,10,14,8,7};
    make_heap(h,h+10,less<int>());
    cout<<"max heap: "<<endl;
    copy(h,h+10,ostream_iterator<int>(cout," "));
    cout<<endl;

    make_heap(h,h+10,greater<int>());
    cout<<"min heap: "<<endl;
    copy(h,h+10,ostream_iterator<int>(cout," "));
    cout<<endl;

    return 0;
}
